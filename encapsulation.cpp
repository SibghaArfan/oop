#include<iostream>
#include<conio.h>
using namespace std;
 class company
 {
 	private:
 	int	salary;
	public:
	void setsalary(int overtime,int totalsalary)
	{
		salary= overtime+totalsalary;}
		int getsalary()
		{
	    return salary;
		}
		
	
 };
main()
{
	company obj ;
	obj.setsalary(6000,30000);
	cout<<"Total salary:"<<endl;
	cout<<obj.getsalary();
	return 0;
}
