#include <iostream>
#include <string>

using namespace std;

class HOD
{
	private:
		string name;
		string address;
		int scale;
		string phNo;

	public:
		HOD(string n, string addr, int s, string phone)
		{
			name = n;
			address = addr;
			scale = s;
			phNo = phone;
		}
		void displayHODDetails()
		{
			cout << "HOD Name: " << name << ", Address: " << address << ", Scale: " << scale << ", Phone Number: " << phNo << endl;
		}
};

class Department 
{
	private:
		string depName;
		string depLocation;
		HOD* hod;

	public:
		Department(string name, string location, HOD* head) : depName(name), depLocation(location), hod(head) {}

		void displayDepartmentDetails()
		{
			cout << "Department Name: " << depName << ", Location: " << depLocation << endl;
			//hod->displayHODDetails();
			(*hod).displayHODDetails();
		}
};

int main()
{
	Department dept("Information Technology", "Building A",  new HOD("Ahmad", "123 Main St", 10, "03*"));
	dept.displayDepartmentDetails();

	

}