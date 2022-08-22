using namespace std;
#include<iostream>
class shang_stock;
class shen_stock {
private:
	int general, st, pt,allaccount;
public:
	shen_stock(int g, int s, int p) {
		general = g;
		st = s;
		pt = p;
	}
	friend void account(shen_stock& s) {
		cout << "account:" << s.general + s.st + s.pt << endl;
	}
	friend void count(const shen_stock& s, const shang_stock& ss);
};
class shang_stock {
private:
	int general, st, pt;
public:
	shang_stock(int g, int s, int p) {
		general = g;
		st = s;
		pt = p;
	}
	friend void account(shang_stock& ss) {
		cout << "account:" << ss.general + ss.pt + ss.st << endl;
	}
	friend void count(const shen_stock& s, const shang_stock& ss);
};
void count(const shen_stock& s, const shang_stock& ss) {
	cout << "Allaccount:" << s.general + s.st + s.pt + ss.general + ss.pt + ss.st << endl;
}
int main() {
	shen_stock s(20, 30, 50);
	shang_stock ss(30, 50, 70);
	account(s);
	account(ss);
	count(s, ss);
	return 0;
}