#include<iostream>
#include<conio.h>
using namespace std;

class A
{ 
	public:
	int x;
    int y;
    A(int x,int y){}
    
    int calculatesum(int x,int y)const{
    	return x+y;
	}
		
	};
	int main()
	{
	const A objA(4,8);
	cout<<"The sum of x and y is: "<<objA.calculatesum(4,8)<<endl;
	return 0;
	}
	