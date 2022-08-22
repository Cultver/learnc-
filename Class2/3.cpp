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
	void Print() {
		cout << "name:\t" << name << endl;
	}
};
class Date :public Student
{
private:
	int _year;
	int _month;
	int _day;
public:
	int GetMonthDays(int year, int month);
	Date(int year, int month, int day);
	void Print()
	{
		cout << "birthday:" << _year << "-" << _month << "-" << _day << endl;
	}
};
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
int Date::GetMonthDays(int year, int month)
{
	return 0;
}
Date::Date(int year, int month, int day)
{
	if (year >= 0 && month > 0 && month < 13 && day > 0 && day < GetMonthDays(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
		cout << "非法日期" << endl;
}
int main() {
	string username;
	int y, m, d;
	cout << "Please enter student name:\n";
	cin >> username;
	cout << "Please enter birthday:";
	cin >> y >> m >> d;
	Student s(username);
	s.Print();
	Date q(y,m,d);
	q.Print();
}