using namespace std;
#include<iostream>
class Triangle {
	float a, b, c;
public:
	Triangle();
	Triangle(float a1, float b1, float c1) {
		a = a1;
		b = b1;
		c = c1;
	}
	friend void print(Triangle &t) {
		cout << "the perimeter of triangle is:" << t.a + t.b + t.c << endl;
	}
};
int main() {
	float a, b, c;
	cout << "Please enter the length of triangle:" << endl;
	cin >> a >> b >> c;
	Triangle t(a, b, c);
	print(t);
	return 0;
}