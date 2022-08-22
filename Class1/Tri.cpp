using namespace std;
#include<iostream>
#include<cmath>
class Tri {
private:
	double a, b, c,d=0;
public:
	Tri(double x, double y, double z) {
		a = x;
		b = y;
		c = z;
	}
	Tri(double x) {
		a = b = c = x;
	}
	~Tri() {

	}
	double Peri() {
		return a + b + c;
	}
	double Area() {
		d = (a + b + c)/2;
		return sqrt(d * (d - a) * (d - b) * (d - c));
	}
	void Print() {
		cout << "三角形三边分别为:" << a << "\t" << b << "\t" << c << endl;
		cout << "三角形周长为：" << Peri() << "\n" << "三角形面积为：" << Area() << endl;
	}
};

int main() {
	Tri* pa, * pb;
	pa = new Tri(3, 4, 5);
	pb = new Tri(3);
	pa->Print();
	pb->Print();
	delete pa;
	delete pb;
	return 0;
}

