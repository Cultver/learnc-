using namespace std;
#include<iostream>
#include<iomanip>
const int row = 2;
const int col = 3;
class Complex {
private:
	int p[row][col];
public:
	Complex();
	Complex(int a[row][col]);
	void show();
	Complex operator+(int b[row][col]);
	Complex operator-(int b[row][col]);
};
Complex::Complex() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			p[i][j] = 0;
		}
	}
}
Complex::Complex(int a[row][col]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			p[i][j] = a[i][j];
		}
	}
}
Complex Complex::operator+(int b[row][col]) {
	Complex a;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			a.p[i][j] = p[i][j] + b[i][j];
		}
	}
	return a;
}
Complex Complex::operator-(int b[row][col]) {
	Complex a;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			a.p[i][j] = p[i][j] - b[i][j];
		}
	}
	return a;
}
void Complex::show() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout <<setw(5)<< p[i][j] << " " << endl;
		}
	}
}
int main() {
	int b[row][col] = { {1,2,3},{4,5,6} };
	int x[row][col];
	Complex aa;
	Complex d(b);
	cout << "Please enter 2*3 arraylist: ";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> x[i][j];
		}
	}
	aa.show();
	d.show();
	aa = d + x;
	aa.show();
	aa = d - x;
	aa.show();
	return 0;
}