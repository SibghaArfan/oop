#include<iostream>
#include<stdexcept>
using namespace std;

main(){
	int x, y;
    cout<<"Enter value of X: ";
	cin>>x;
	cout<<"Enter value of Y: ";
	cin>>y;

    try{
        if(y!=0){
            cout<<x<<" / "<<y<<" = "<<x/y;
        }
        else{
            //throw y;
            throw runtime_error("Divider is Zero\n");
        }
    }
    //catch(int n)
    catch(exception &e){
        //cout<<"Divider is Zero\n";
        cout<<e.what()<<endl;
    }
}