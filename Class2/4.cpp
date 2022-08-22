using namespace std;
#include<iostream>
class Student {
public:
	string name;
	Student();
	Student(string n) {
		name = n;
	}
	~Student();
};
class Date :public Student 
{
private:
	int _year;
	int _month;
	int _day;
public:
	int GetMonthDays(int year, int month)
	{
		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int days = monthDays[month];
		if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		{
			days = 29;
		}
		return days;
	}
	Date(int year, int month, int day)
	{
		if (year >= 0
			&& month > 0 && month < 13
			&& day > 0 && day < GetMonthDays(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
			cout << "�Ƿ�����" << endl;
	}

	// �������캯�����Բ�д
	// d2(d1)
	//Date(const Date& d);

	// ��ֵ���������
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	// �����������Բ�д
	//~Date();
	// ����+=����
	Date& operator+=(int day)
	{
		if (day < 0)
		{
			*this -= -day;
			return *this;
		}
		_day += day;
		while (day > GetMonthDays(_year, _month))
		{
			_day -= GetMonthDays(_year, _month);
			++_month;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
	// ����+����
	Date operator+(int day)
	{
		Date ret(*this);//*this ����d��ret�൱��d1�Ŀ���
		/*ret._day += day;
		while (ret._day > GetMonthDays(ret._year, ret._month))
		{
		ret._day -= GetMonthDays(ret._year, ret._month);
		ret._month++;
		if (ret._month == 13)
		{
		ret._year++;
		ret._month = 1;
		}
		}*/
		ret.operator+=(day);
		return ret;
	}
	// ����-=����
	Date& operator-=(int day)
	{
		if (day < 0)
		{
			*this -= -day;
			return *this;
		}
		_day -= day;
		while (_day <= 0)
		{
			_month--;
			if (_month == 0)
			{
				_year--;
				_month = 12;
			}
			_day += GetMonthDays(_year, _month);
		}
		return *this;
	}
	// ����-����
	Date operator-(int day)
	{
		Date ret(*this);
		ret.operator-=(day);
		return ret;
	}

	// ǰ��++
	Date& operator++()
	{
		*this += 1;
		return *this;
	}

	// ����++
	Date operator++(int)
	{
		Date ret(*this);
		*this += 1;
		return ret;
	}

	// ����--
	Date operator--(int)
	{
		Date ret(*this);
		*this -= 1;
		return ret;
	}

	// ǰ��--
	Date& operator--()
	{
		*this -= 1;
		return *this;
	}

	// >���������
	bool operator>(const Date& d)
	{
		if ((_year > d._year)
			|| (_year == d._year && _month > d._month)
			|| (_year == d._year && _month == d._month && _day > d._day))
		{
			return true;
		}
		return false;
	}

	// ==���������
	bool operator==(const Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}

	// >=���������
	bool operator >= (const Date& d)
	{
		return *this > d || *this == d;
	}

	// <���������
	bool operator < (const Date& d)
	{
		return !(*this >= d);
	}

	// <=���������
	bool operator <= (const Date& d)
	{
		return !(*this > d);
	}

	// !=���������
	bool operator != (const Date& d)
	{
		return !(*this == d);
	}

	// ����-���� ��������
	int operator-(const Date& d)
	{
		int flag = -1;
		Date min = *this;
		Date max = d;

		if (*this > d)
		{
			flag = 1;
			min = d;
			max = *this;
		}
		int n = 0;
		while (min != max)
		{
			++n;
			++min;
		}

		return flag * n;


	}
	void Print()
	{
		cout << "name:\t" << name << "\n" << "birthday:" << _year << "-" << _month << "-" << _day << endl;
	}
};

int main()
{
	Date d12(2020, 3, 19);
	Date d13(2020, 3, 20);
	d12.Print();
	d13.Print();

	/*Date d14 = d12++;
	d14.Print();
	++d12;
	d12.Print();*/
	return 0;
}