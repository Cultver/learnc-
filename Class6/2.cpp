using namespace std;
#include<iostream>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
class Datan {
private:
	string username, pwd;
	static int n;
public :
	Datan();using namespace std;
#include<iostream>
//#include<ctype.h>
//#include<stdlib.h>
#include<conio.h>
class Datan {
private:
	string username, pwd;
	static int n;
public:

	void Data(string username1, string pwd1) {
		username = username1;
		pwd = pwd1;
		n++;
	}
	void print() {
		cout << "username:" << username << "\t" << "password:" << pwd << endl;
	}
	static void display() {
		cout << "the number of user has been entered:" << n << endl;
	}

};
int Datan::n = 0;
int main() {
	Datan A[50];
	string username;
	cout << "Please enter username and password:(if you dont input user ,please enter 0)" << endl;
	cin >> username;
	int i = 0;
	while (username != "0") {
		string  pwd;
		char ch;
		while ((ch = _getch()) != 13) {
			pwd += ch;
			cout << "*";
		}
		A[i].Data(username, pwd);
		cin >> username;
		i++;
	}
	for (int j = 0; j < i; j++) {
		A[j].print();
	}
	A[i].display();
	return 0;
}
	void Data(string username1, string pwd1) {
		username = username1;
		pwd = pwd1;
		n++;
	}
	void print() {
		cout << "username:" << username << "\t" << "password:" << pwd << endl;
	}
	static void display() {
		cout << "the number of user has been entered:" << n << endl;
	}

};
int Datan::n = 0;
int main() {
	Datan A[50];
	string username;
	cout <<  "Please enter username and password:(if you dont input user ,please enter 0)" << endl;
	cin >> username;
	int i = 0;
	while(username!="0"){
		string  pwd;
		char ch;
		while ((ch=_getch())!=13) {
			pwd+=ch;
			cout << "*";
		}
		A[i].Data(username, pwd);
		cin >> username;
		i++;
	} 
	for (int j = 0; j < i; j++) {
		A[j].print();
	}
	A[i].display();
	return 0;
}