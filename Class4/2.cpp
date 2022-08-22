using namespace std;
#include<iostream>
class Person {
protected:
	string name;
	int cast, age;
public:
	Person(string name1, int cast1, int age1) {
		name = name1;
		cast = cast1;
		age = age1;
	}
	void show();
};
void Person::show() {
	cout << "name:" << name << "\tcast:" << cast << "\tage:" << age << endl;
}
class Teacher :public Person{
protected:
	int tnum;
	float wages;
public:
	Teacher(string name1, int cast1, int age1,int tnum1,float wages1):Person(name1, cast1,age1) {
		tnum = tnum1;
		wages = wages1;
	}
	void show();
};
void Teacher::show() {
	cout << "name:" << name << "\tcast:" << cast << "\tage:" << age << endl;
	cout << "teachernumber:" << tnum << "\twages:" << wages << endl;
}
class Student :public Person{
protected:
	int snum, scout;
public:
	Student(string name1, int cast1, int age1, int snum1,int scout1) :Person(name1, cast1, age1) {
		snum = snum1;
		scout = scout1;
	}
	void show();
};
void Student::show() {
	cout << "name:" << name << "\tcast:" << cast << "\tage:" << age << endl;
	cout << "studentnumber:" << snum << "\tscout:" << scout << endl;
}
class Grastudent:public Teacher,public Student {
public:
	Grastudent(string name1, int cast1, int age1, int tnum1, int snum1, int scout1, float wages1) :Teacher(name1, cast1, age1, tnum1, wages1), Student(name1, cast1, age1, snum1, scout1){}
	void show();
};
void Grastudent::show() {
	cout << "name:" << Person::name << "\tcast:" << Person::cast << "\tage:" << Person::age << endl;
	cout << "teachernumber:" << tnum << "\twages:" << wages << endl;
	cout << "studentnumber:" << snum << "\tscout:" << scout << endl;
}
int main() {

}