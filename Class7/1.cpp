/*��������ͼ������ݰ������������ߡ������硢��źͶ��ۡ�
Ҫ�����ͼ������ݲ���������������ܼ�*/
using namespace std;
#include<iostream>
class Book {
public:
	string title, author, publisher;
	static int priceall, bnumber;
	int price, isbn;
	Book(string t, string a, string p,int i,int pr) {
		title = t;
		author = a;
		publisher = p;
		isbn = i;
		price = pr;
		bnumber++;
		priceall += price;
	}
	~Book()
	{
		bnumber--;
	}
	static int getCount() {
		return bnumber;
	}
	static int getPricing() {
		return priceall;
	}
	void oput();
};
int Book::bnumber = 0;
int Book::priceall = 0;
void Book::oput() {
	cout << "\n����:" << title << "\n���ߣ�" << author << "\n�����磺" << publisher << "\n��ţ�" << isbn << "\n����:" << price << endl;
}
int main() {
	Book b1("C++ primer plus", "au", "tsinghua", 8517, 65);
	Book b2("Thinking in java", "pulin", "jixie", 23423, 60);
	b1.oput();
	b2.oput();
	cout << "the number of book:" << b2.getCount() << "\tthe price of all books:" << b2.getPricing() << endl;
	return 0;
}