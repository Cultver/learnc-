using namespace std;
#include<iostream>
const double PI = 3.14159;
//6.0cube   5.0sphere r5.0h6.0cylinder
class container {
protected:
	double radius;
public:
	container(double radius1=0) {
		radius = radius1;
	}
	virtual double surface_area() = 0;
	virtual double volume() = 0;
};
class cube :public container {
public:
	double a;
	cube(double a1=0){
		a = a1;
	}
	double surface_area() {
		return a * a * 6;
	}
	double volume()
	{
		return a * a* a;
	}
};
class sphere :public container {
public:
	sphere(double radius1) :container(radius1){}
	double surface_area() {
		return 4 * PI* radius* radius;
	}
	double volume()
	{
		return (4 / 3) * PI * radius * radius * radius;
	}

};
class cylinder :public container {
public :
	double h;
	cylinder(double radius1,double h1 ) :container(radius1) {
		h = h1;
	}
	double surface_area() {
		return PI * radius* radius * 2 + PI * radius * 2 * h;
	}
	double volume()
	{
		return PI * radius* radius* h;
	}
};
void display(container *p) {
	cout << "surface_area:" << p->surface_area() << endl;
	cout << "volume:" << p->volume() << endl;
}
int main() {
	container* p;
	cube cu(6.0);
	sphere sp(5.0);
	cylinder cy(5.0,6.0);

	p = &cu;
	display(p);
	p = &sp;
	display(p);
	p = &cy;
	display(p);

	return 0;
}