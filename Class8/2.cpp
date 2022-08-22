using namespace std;
#include<iostream>
#include<iomanip>
const int row = 2;
const int col = 4;
class Matrix {
private:
	int m[row][col];
public:
	Matrix();
	Matrix(int m1[2][4]);
	void input();
	void show();
	friend Matrix operator+(Matrix& m1, Matrix& m2);
	/*friend istream& operator>>(istream &, Matrix &)；输入输出流不如数组快，一个个输入输出写太多了。
	friend ostream& operator<<(ostream &, Matrix &);*/
};
Matrix::Matrix() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			m[i][j] = 0;
		}
	}
}
Matrix::Matrix(int m1[2][4]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			m[i][j] = m1[i][j];
		}
	}
}
void Matrix::input() {
	cout << "Please enter matrix:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> m[i][j];
		}
	}
}
void Matrix::show() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}
Matrix operator+(Matrix &m1, Matrix& m2) {
	Matrix m3;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			m3.m[i][j] = m1.m[i][j] + m2.m[i][j];
		}
	}
	return m3;
}
//istream& operator>>(istream& is, Matrix& m) {
//	is>>m
//}
//ostream& operator>>(ostream& os, Matrix& m) {
//	cout << "the Matrix is:" << endl;
//	os << m.a << "\t" << m.b << "\t" << m.c << endl;
//}
int main() {
	Matrix m1, m2, m3;
	m1.input();
	m2.input();
	cout << "Matrix1:" << endl;
	m1.show();
	cout << "Matrix2:" << endl;
	m2.show();
	m3 = m1 + m2;
	cout << "Matrix3:" << endl;
	m3.show();
	return 0;
}