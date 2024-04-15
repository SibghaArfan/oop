//Access specifier and concept of Constructor 
#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
	public:
		string name;string phone;string company;
		int Age;
			void introduceyourself()
	{
		cout<<"name="<<name<<endl;
		cout<<"phone="<<phone<<endl;
		cout<<"company="<<company<<endl;
		cout<<"age="<<Age<<endl;
		
	 }
//	 constructor
	 Employee(string n,string ph,string com,int age) {
	 	name=n,phone=ph,company=com;Age=age;
	 }
	 
};

	 main()
	 {
	 Employee employee1=Employee("Sibgha","0316-9441673","ICI",20);
//	 or second method to show same data
//	 employee1.name= "Sibgha";	
//	 employee1.phone="0303-9441673";
//	 employee1.company="ICI";
//	 employee1.Age=20;
	 employee1.introduceyourself();
	 cout<<endl;
	 cout<<endl;
	 Employee employee2=Employee("MAIRA","0312-1452912","ENGRO",21);
//	  employee2.name= "MAIRA";	
//	 employee2.phone="0312-1452912";
//	 employee2.company="ENGRO";
//	 employee2.Age=21;
	 employee2.introduceyourself();
	 	 }
