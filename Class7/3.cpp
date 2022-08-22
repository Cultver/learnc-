using namespace std;
#include<iostream>
class TwoD {
private:
	float x, y;
public :
	TwoD(float a = 0,float b = 0) {
		x = a;
		y = b;
	}
	TwoD operator ++();
	TwoD operator ++(int);
	void show() {
		cout << "x=" << x << "\ty=" << y << endl;
	}
};
TwoD TwoD::operator++() {
	x++;
	y++;
	return *this;
}
TwoD TwoD::operator++(int) {
	TwoD temp = *this;
	x++;
	y++;
	return temp;
}
int main() {
	TwoD m1(1, 5);
	TwoD m2(14, 58),m3;
	m1.show();
	m3 = ++m1;
	m1.show();
	m3.show();
	m2.show();
	m3 = m2++;
	m2.show();
	m3.show();
	return 0;
}