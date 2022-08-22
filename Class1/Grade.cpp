using namespace std;
#include<iostream>
class Grade {
private:
	string name;
	int snumber;
	float mathg,eng,phyg,cg;
public:
	void Out() {
		cout << "当前学生学号为："<<snumber<<"\t姓名为："<<name<<"\n总成绩为：" << ComputerAll() << "\t平均成绩为：" << ComputerAverage() << endl;
	}
	Grade(string m,int n,float a ,float b,float c,float d) {
		name = m;
		snumber = n;
		mathg = a;
		eng = b;
		phyg = c;
		cg = d;
	}
	~Grade()
	{
		cout << "success" << endl;
	}
	/*Change() () {
		
	}*/
	float ComputerAll() {
		return mathg + eng + phyg + cg;
	}
	float ComputerAverage() {
		return (mathg + eng + phyg + cg) / 4;
	}
};
int main() {
	Grade a("lucas", 39, 90, 98, 94, 90);
	a.Out();
	//a.Change("zs",01,99,100,98,99);
	//a.Out();
}