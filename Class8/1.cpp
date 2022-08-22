using namespace std;
#include<iostream>
#define m 2
#define n 3
class Complex {
private:
	int p[m][n] = { {0,0,0}, {0,0,0} };
public:
	Complex();
	Complex(int a[m][n]);
	friend Complex operator+(Complex a, int b[m][n]);
	friend Complex operator-(Complex a, int b[m][n]);
	void show();
};
Complex::Complex() {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			p[i][j] = 0;
		}
	}
}
Complex::Complex(int a[m][n]) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			p[i][j] = a[i][j];
		}
	}
}
Complex operator+(Complex a, int b[m][n]) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a.p[i][j] = a.p[i][j] + b[i][j];
		}
	}
	return a;
}
Complex operator-(Complex a, int b[m][n]) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a.p[i][j] = a.p[i][j] - b[i][j];
		}
	}
	return a;
}
void Complex::show() {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << p[i][j] << " " << endl;
			}
		}
}
int main() {
	int b[m][n] = { {1,2,3},{4,5,6} };
	int x[m][n];
	Complex aa;
	Complex d(b);
	for(int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			cin >> x[j][i];
		}
	}
	aa = d + x;
	aa.show();
	cout << "\n";
	aa = d - x;
	aa.show();
	return 0;
}