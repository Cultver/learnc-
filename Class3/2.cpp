using namespace std;
#include<iostream>
class Time {
protected:
	int hours, minutes, seconds;
public:
	Time(int h=0, int m=0, int s=0) {
		hours = h;
		minutes = m;
		seconds = s;
	}
	void display() {
		cout << "出生时间:" << hours << "时" << minutes << "分" << seconds << "秒\n";
	}
	void input() {
		cout << "Please enter Time:\n";
		cin >> hours >> minutes >> seconds;
	}
};
class Date {
protected:
	int month, day, year;
public:
	Date(int m=0, int d=0, int y=0) {
		month = m;
		day = d;
		year = y;
	}
	void display() {
		cout << "出生年月:" << year << "年" << month << "月" << day << "日" << endl;
	}
	void input() {
		cout << "Please enter Date(month,day,year):\n";
		cin >> month>> day >> year;
	}
};
class Birthday :public Time, public Date {
	Time t;
	Date d;
	string Childname;
public:
	Birthday(Time t,Date d, string name):t(t),d(d) {
		Childname = name;
	}
	void display() {
		cout << "名字:" << Childname << endl;
	}
};
int main() {
	string name;
	Time t;
	t.input();
	Date d;
	d.input();
	cout << "Please enter childname:\n";
	cin >> name;
	Birthday bir(t, d, name);
	t.display();
	d.display();
	bir.display();



}