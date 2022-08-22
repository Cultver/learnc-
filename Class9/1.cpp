/* 定义一个类ARRAY,实现对一维整型数组的排序。排序的规则为将一维数组中的各元素按其各位的数字之和从小到大排序。具体要求如下：
（1）私有数据成员：
int a[100]:待排序的数组。
int n:数组中元素的个数。
（2）公有成员函数：
ARRAY(int t[],int m):构造函数，利用参数t初始化成员a，参数m为数组t中元素的个数，用参数m初始化成员n。
int sum(int x):求整数x的各位数字之和，并返回该值，此函数供成员函数fun（）调用。
void fun():按要求对数组a的元素排序。
void print():输出数组a的所有元素到屏幕及数据文件myfile.out中，最后将考生本人的姓名、学号、班级字符串输出到文件myfile.out中。
（3）在主函数中对该类进行测试。
要求输出的结果如下：
排序前的数组为297,735,624,158,312,900。
排序后的数组为312 ,900,624,158,735,297*/
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
		cout << "排序前的数组为";
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
			a += x % 10;//个位数
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
		cout << "排序后的数组为";
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
	outfile << "吴患，201921227039，计科1910" << endl;
	return 0;
}