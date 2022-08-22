using namespace std;
#include<iostream>
const double PI = 3.14;
class cylinder {
private:
	double radius, height;
	double volume;
public:
	cylinder(double r,double h);
	~cylinder()
	{
		//cout << "\n当前对象已析构!" << endl;
	}
	void vol() {
		cout << "the volume of this object is :\t" << volume << endl;
	}
	void cal_volume();
};
cylinder::cylinder(double r, double h) {
	radius = r;
	height = h;
}
void cylinder::cal_volume() {
	volume = (radius * radius) * PI * height;
}
int main() {
	cylinder c(1, 1);
	cylinder d(2, 2);
	c.vol();
	d.vol();
	return 0;
}