/* ����һ����ARRAY,ʵ�ֶ�һά�����������������Ĺ���Ϊ��һά�����еĸ�Ԫ�ذ����λ������֮�ʹ�С�������򡣾���Ҫ�����£�
��1��˽�����ݳ�Ա��
int a[100]:����������顣
int n:������Ԫ�صĸ�����
��2�����г�Ա������
ARRAY(int t[],int m):���캯�������ò���t��ʼ����Աa������mΪ����t��Ԫ�صĸ������ò���m��ʼ����Աn��
int sum(int x):������x�ĸ�λ����֮�ͣ������ظ�ֵ���˺�������Ա����fun�������á�
void fun():��Ҫ�������a��Ԫ������
void print():�������a������Ԫ�ص���Ļ�������ļ�myfile.out�У���󽫿������˵�������ѧ�š��༶�ַ���������ļ�myfile.out�С�
��3�����������жԸ�����в��ԡ�
Ҫ������Ľ�����£�
����ǰ������Ϊ297,735,624,158,312,900��
����������Ϊ312 ,900,624,158,735,297*/
using namespace std;
#include<iostream>
#include<fstream>
#include<cstdlib>
class ARRAY {
private:
	int a[100] = {};
	int n;
public:
	ARRAY(int t[], int m) {
		cout << "����ǰ������Ϊ";
		for (int i = 0; i < m; i++) {
			a[i] = t[i];
			cout  << t[i] << ",";
		}
		cout<<endl;
		n = m;
	}
	int sum(int x) {
		int a = 0;
		while (x != 0) {
			a += x % 10;//��λ��
			x = x / 10;
		}
		return a;
	}
	void fun() {
		for (int i = 0; i < n-1; i++) {
			for (int j = 0; j < n - 1 - i; j++) {
				if (sum(a[j]) > sum(a[j + 1])) {
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
	}
	void print() {
		cout << "����������Ϊ";
		for (int i = 0; i < n; i++) {
			cout  << a[i] << ",";
		}
		
	}
};
int main() {
	int t[] = { 297,735,624,158,312,900 };
	ARRAY a(t, 6);
	a.fun();
	a.print();
	ofstream outfile("myfile.out", ios::out);
	if (!outfile) {
		cerr << "open error1" << endl;
		exit(1);
	}
	for (int i = 0; i < 6; i++) {
		outfile << t[i] << endl;
	}
	outfile << "�⻼��201921227039���ƿ�1910" << endl;
	return 0;
}