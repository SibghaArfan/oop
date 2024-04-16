#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Abstractemployee
{
		virtual void askforpromotion()=0;	
};
class Employee:Abstractemployee
{
	private:
		string name;string phone;string company;
		int Age;
		public:
			void setname(string name){
				name=name;
			}
			string getname(){
			
			return name;
			}
			
			void setphone(string phone){
				phone=phone;
			}
			string getphone(){
			
			return phone;
			}
			void setcompany(string company){
				company=company;
			}
			string getcompany(){
			
			return company;
			}
			void setAge(int Age){
			Age=Age	;
			}
			int getAge(){
			
			return Age;
			}
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
	 void askforpromotion(){
	 	if(Age>=30)
	 	cout<<name<<" PROMOTED!";
	 	else
	 	cout<<name<<" YOU ARE NOT PROMOTED";
	 }
	 
};

  int main()
	 {
	 Employee employee1=Employee("SIBGHA","0316-9441673","ICI",25);
	
	 cout<<endl;
	
	 Employee employee2=Employee("MAIRA","0312-1452912","ENGRO",30);
    employee1.askforpromotion();
     cout<<endl;
	employee2.askforpromotion(); 
	 	 }