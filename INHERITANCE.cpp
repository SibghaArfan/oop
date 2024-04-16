#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Abstractemployee
{
		virtual void askforpromotion()=0;	
};
class Employee:Abstractemployee
{protected:
	string name;
	private:
		string phone;string company;
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
class developers:public Employee
	 {public:
	 	string Favlanguage;
	 	developers(string n,string ph,string com,int age,string favlanguage):Employee(n,ph,com,age){
		 Favlanguage =favlanguage;}
		 void fixbug(){
		 	cout<<getname()<<" fixed bug using "<< Favlanguage;
		 
		 }
	 };
class teacher:public Employee{
	public:
		string subject;
            void preparelesson(){
			cout<<name<<" is preparing "<<subject<<" lesson"<<endl;}
		
		teacher(string n,string ph,string com,int age,string subject):Employee(n,ph,com,age){
			subject=subject;}
			
				
};
	 
	  int main()
	 {
	 developers d = developers("SIBGHA","0393","yt",20,"C++");
	 d.fixbug();cout
	 <<endl;
	 d.askforpromotion();
	 teacher t=teacher("Sibgha","233","YT",23,"COMPUTER");
	 cout<<endl;
	 t.preparelesson();
	 	 }