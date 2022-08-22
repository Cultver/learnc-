/*已有若干图书的数据包括书名、作者、出版社、书号和定价。
要求输出图书的数据并计算书的数量和总价*/
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
	cout << "\n书名:" << title << "\n作者：" << author << "\n出版社：" << publisher << "\n书号：" << isbn << "\n定价:" << price << endl;
}
int main() {
	Book b1("C++ primer plus", "au", "tsinghua", 8517, 65);
	Book b2("Thinking in java", "pulin", "jixie", 23423, 60);
	b1.oput();
	b2.oput();
	cout << "the number of book:" << b2.getCount() << "\tthe price of all books:" << b2.getPricing() << endl;
	return 0;
}