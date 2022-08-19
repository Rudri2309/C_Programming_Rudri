#include<iostream>
using namespace std;

int main()
{
	int a , b ;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	
	int choice;
	cout<<"\n*********Arithmetic Operation*********"<<endl;
	cout<<"Press 1.Addition\nPress 2. Subtraction\nPress 3.Multiplication\nPress 4.Division"<<endl;
	cout<<"Enter choice ? ";
	cin>>choice;
	cout<<"\nA = "<<a<<",\tB = "<<b<<endl<<endl;;
	cout<<"==================="<<endl;
	switch(choice)
	{
		case 1:cout<<"\nAddition = "<<(a+b)<<endl;
				break;
		case 2:cout<<"\nSubtraction = "<<(a-b)<<endl;
				break;
		case 3:cout<<"\nMultiplication = "<<(a*b)<<endl;
				break;
		case 4:	cout<<"\nDivision = "<<((float)a/b)<<endl;
				break;
		default:cout<<"Invalid "<<endl;
	}
	

	
	
	

		
	return 0;
}