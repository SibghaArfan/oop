#include <iostream>
using namespace std;


class Person
{	
	string phone,name,CNIC,Addr,Dob;
public:
  
    Person(string ph,string n,string cnic,addr,dob)
    {
       ph ="0303-*******";
       n="WAQAS";
       cnic="35404-********";
       addr="lahore";
       dob="2-9-2003";
    }
    Person() {}
};

class Employee : public Person
{
public:
    int languageCode;
    Employee(string ph,string n,string cnic,addr,dob)
    {
       name=n,phone=ph,CNIC=cnic,Addr=addr,Dob=dob;
        languageCode = 9;
    }
    void getData(){
        cout<<name<<endl;
        cout<<phone<<endl;
        cout<<Addr<<endl;
        cout<<CNIC<<endl;
        cout<<Dob<<endl;
    }
};


int main()
{
    Person harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Employee skillF(10);
    cout << skillF.languageCode<<endl;
	    cout << skillF.name<<endl;
	    cout << skillF.phone<<endl;
	    cout << skillF.Addr<<endl;
	    cout << skillF.CNIC<<endl;
	    cout << skillF.Dob<<endl;
    skillF.getData();
    return 0;
}
