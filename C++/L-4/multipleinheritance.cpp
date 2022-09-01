#include <iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		
		Student()
		{
			id = 100;
		}
		void getName()
		{
			cout<<"Enter Name: ";
			cin>>name;
		}
		
};

class ExtraMarks{
	public:
		int sp;
		
		ExtraMarks()
		{
			sp = 54;
		}
		
};
class Result: public Student,public ExtraMarks{
	public:
		int s1,s2,s3,total;
		float avg;
		
		Result()
		{
			s1 = 56;
			s2 = 56;
			s3 = 56;
			total = s1+s2+s3;
			avg = (float)total/3;
		}
		void display()
		{
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Extra Ciricullum Marks : "<<sp<<endl;
			cout<<"Total Marks : "<<total<<endl;
			cout<<"Average : "<<avg<<endl;
		}
};


int main()
{
	Result r;
	r.getName();
	r.display();
	return 0;	
}