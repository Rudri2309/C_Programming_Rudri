#include <iostream>
using namespace std;

class A{
	public:
		int a;
		void getA()
		{
			cout<<"Enter A: ";
			cin>>a;
		}
		
		void showA()
		{
			cout<<"A = "<<a<<endl;
		}
};
class B: public A{
	public:
		int b;
		void getB()
		{
			cout<<"Enter B: ";
			cin>>b;
		}
		void showB()
		{
			cout<<"B = "<<b<<endl;
		}
};

class C: public B{
	public:
		int c;
		void getC()
		{
			cout<<"Enter C: ";
			cin>>c;
		}
		void showC()
		{
			cout<<"C = "<<c<<endl;
		}
};
int main()
{
	C c;
	c.getA();
	c.getB();
	c.getC();
	c.showA();
	c.showB();
	c.showC();
	return 0;
}