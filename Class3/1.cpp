#include<iostream>
#include<math.h>
using namespace std;
class Point {
public:
	float x, y;
	Point(float m=0, float n=0) {
		x = m;
		y = n;
	}
	~Point()
	{
		/*cout << "xg1" << endl;*/
	}
	float Distance(Point p) const {
		float d;
		d = sqrt(abs(p.x - x) * abs(p.x - x) + abs(p.y - y) * abs(p.y - y));
		return d;
	}
	void input() {
		cout << "Please enter point:" << endl;
		cin >> x >> y;
	}
	void show(void) {
		cout << "x=" << x << "\ty=" << y << endl;
	}
};
class Line :public Point{
	Point p1, p2;
public:
	float line;
	Line(Point c, Point d) :p1(c), p2(d) {
		line = sqrt(abs(p1.x - p2.x) * abs(p1.x - p2.x) + abs(p1.y - p2.y) * abs(p1.y - p2.y));
	}
	~Line()
	{
		/*cout << "xg2" << endl;*/
	}
	void show(void) {
		cout << "Point1:";
		p1.show();
		cout << "Point2:";
		p2.show();
		cout << "Length=" << line << endl;
	}
};
class Triangle :public Point{
	Point P1,P2,P3;
public:
	float Length=0;
	Triangle(Point li1, Point li2, Point li3) :P1(li1), P2(li2), P3(li3){
		P1 = li1;
		P2 = li2;
		P3 = li3;
	}
	~Triangle()
	{
		
	}
	void show(void) {
		float p, a, b, c;
		a = P1.Distance(P2);
		b = P1.Distance(P3);
		c = P2.Distance(P3);
		Length = a + b + c;
		p = Length / 2;

		cout << "the perimeter of triangle is:\t" << Length << endl;
		cout << "the area of triangle is:\t" << sqrt(p * (p - a) * (p - b)*(p - c));
	}
};
int main() {
	Point p1;
	p1.input();
	Point p2;
	p2.input();
	Point p3;
	p3.input();
	Line line1(p1, p2);
	line1.show();
	Triangle tri1(p1, p2, p3);
	tri1.show();
	return 0;
}