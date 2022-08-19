#include<iostream>
using namespace std;

class Box{
	public:
		
		double width,height,depth;
		Box()
		{
			cout<<"Default Constructor Called"<<endl;
			width = 9;
			height = 5;
			depth = 3;
		}
		
		Box(double w, double h, double d)
		{
			cout<<"Parameterized Constructor Called."<<endl;
			width = w;
			height = h;
			depth = d;
		}
		Box(const Box &obj)
		{
			cout<<"Copy Constructor Called."<<endl;
			width = obj.width;
			height = obj.height;
			depth = obj.depth;
		}
		
		void show()
		{
			cout<<"W  = "<<width<<"\tH = "<<height<<"\tD = "<<depth<<endl;
		}
		
		void volume()
		{
			cout<<"Volume "<<(width*height*depth)<<endl;
		}
		
};
int main()
{
	Box b1; //Default Constructor
	b1.volume();
	Box b2(4,6,8); //Parameterized Constructor
	b2.volume();
	Box b3(b2);
	b3.volume();
	return 0;
}
