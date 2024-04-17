#include<iostream>
#include<conio.h>
using namespace std;
class Student
{public:
	string name;
	int age;
	bool gender;
	void display(){
		cout<<"name= ";
		cout<<name<<endl;
		cout<<"age= ";
		cout<<age<<endl;
		cout<<"gender= ";
		cout<<gender<<endl;
	}
};
	int main()
	{
	Student arr[3];
		for(int i=0;i<3;i++)
	{
			cout<<"ENTER NAME?: ";
		cin>>arr[i].name;
		cout<<"ENTER AGE?: ";
		cin>>arr[i].age;
		cout<<"ENTER gender?: ";
		cin>>arr[i].gender;}
		
		for(int i=0;i<3;i++)
	{  arr[i].display();
		}	
		
	return 0;	
	}