#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int x;
	public:
		A()
		{
		}
		A(int x)
		{x= a;
		}
		void setData()
		{cout<<"Enter a number";
		cin>>x;
		}
			void setData(int a)
			{x= a;
			}
			getData()
			{return x;
			}
};
class B:public A
{int y;
public:
	B()
	{
	}
	B(int b)
	{y= b;
	}
	int getData()
	{return y;
	}
};
main()
{
	B.obj B;
	obj B.setdata();
	cout<<"obj B.getData()";
	return 0;
}
