#include<iostream>
using namespace std;

class A{
	public:
		void show()
		{
			cout<<"Show from A ";
		}
		
};
class B : public A{
	public:
		void show()
		{
			cout<<"Show from B ";
		}
};

int main()
{
	B b;
	b.show();
}