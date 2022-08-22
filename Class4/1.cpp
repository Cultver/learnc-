using namespace std;
#include<iostream>
class Teacher {
protected:
	string name, address, sex, title;
	int age, phone;
public:
	Teacher(string name1, string title1, string sex1, string address1, int phone1, int age1) {
		name = name1;
		title = title1;
		sex = sex1;
		address = address1;
		phone = phone1;
		age = age1;
	}
	void display();
};
void Teacher::display() {
	cout << "name:" << name << "\t"<<"age:"<< age << "\tsex:" << sex << "\ttitle:" << title << "\taddress:" << address << "\tphone:" << phone << endl;
}
class Cadre {
protected:
	string name, address, sex, post;
	int age, phone;
public:
	Cadre(string name1, string post1, string sex1, string address1, int phone1, int age1) {
		name = name1;
		post = post1;
		sex = sex1;
		address = address1;
		phone = phone1;
		age = age1;
	}
};
class Teacher_Cadre :public Teacher, public Cadre {
private:
	float wages;
public:
	Teacher_Cadre(string name1, string title1, string sex1, string address1,
		string post1, int phone1, int age1, float wages1) :
		Teacher(name1, title1,sex1,address1,phone1,age1),
		Cadre(name1,post1 , sex1, address1, phone1, age1) {
		wages = wages1;
	}
	void show();
};
void Teacher_Cadre::show() {
	Teacher::display();
	cout << "post:" << Cadre::post << "\twages:" << wages << endl;
}
int main() {
	Teacher_Cadre tc("zs","hightech", "male", "china", "little", 110, 20,7000.12);
	tc.show();
	return 0;
}
