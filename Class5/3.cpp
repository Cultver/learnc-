using namespace std;
#include<iostream>
const float PI = 3.14;
class Base {
protected:
	float h;
public:
	Base() {

	}
	Base(float h1) {
		h = h1;
	}
	virtual void disp(){
		cout << "h:" << h << endl;
	}
};
class Cuboid:public Base{
private:
	float l, s;
public:
	Cuboid(float l1, float s1):Base(h) {
		l = l1;
		s = s1;
	}
	void disp() {
		cout << "the volume of cuboid is:" << l * s * h << endl;
	}
};
class Cylinder:public Base {
private:
	float r;
public:
	Cylinder(float radius) :Base(h) {
		r = radius;
	}
	void disp() {
		cout << "the volume of cylinder is:" << r * r * PI * h << endl;
	}
};
int main() {
	Base b(1.1),* pb;
	Cuboid c(1.0,2.0);
	Cylinder cc(1.0);
	pb = &c;
	pb->disp();
	pb = &cc;
	pb->disp();
	return 0;
}