#include<iostream>
using namespace std;

inline float mul( float a, float b)
{
    return(a*b);
}
 
inline float cubeA(float a)
{
    return(a*a*a);
}

inline float cubeB(float b)
{
    return(b*b*b);
}
 
int main()
{
    float x,y;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<mul(x,y)<<"\n";
    cout<<cubeA(x)<<"\n";
	cout<<cubeB(y)<<"\n";
    return 0;
}
