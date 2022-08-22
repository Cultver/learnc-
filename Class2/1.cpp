using namespace std;
#include<iostream>
class T {
private:
	char* p1, * p2;
public:
	T(const char* s1,const char* s2);
	T(T &t);
	~T()
	{
		if (p1 != NULL) {
			delete []p1;
		}
		if (p2 != NULL) {
			delete []p2;
		}
	}
	void Print() {
		cout << "p1=" << p1 << "\n" << "p2=" << p2 << endl;
	}

};
T::T(const char* s1, const char* s2) {
	p1 = new char[strlen(s1) + 1];
	if(p1!=0){ 
		strcpy(p1, s1); 
	}
	p2 = new char[strlen(s2) + 1];
	if (p2 != 0) {
		strcpy(p2, s2);
	}

}
T::T(T& t) {
	p1 = new char[strlen(t.p1) + 1];
	if (p1 != 0) {
		strcpy(p1, t.p1);
	}
	p2 = new char[strlen(t.p2) + 1];
	if (p2 != 0) {
		strcpy(p2, t.p2);
	}
}
int main() {
	T a("asd", "da");
	a.Print();
	T b(a);
	b.Print();
	return 0;
}