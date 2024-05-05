#include <iostream>
using namespace std;

class employee
{
	int id;
	static int count;
	// static int count= 1000; // syntax error
	public:
	// static Keyword
	void getdata(void)
	{
		cout <<"ID: "<< id << endl;
		// cout <<"Count: "<< count << endl;
	}
	void setdata(void)
	{
		cout<<"enter ID: ";
		cin>>id;
		count++;
	}

	//static Function
	static void getcount(void){
		cout<<"he value of count is "<<count<<endl;
	}
};

// int employee :: count; // default value is 0;
int employee :: count; //starts from 1000

int main()
{

	// static keyword
	employee ayush, mohit, suresh;
	// ayush.id = 123;  // Can't access as data member are private
	// ayush.count = 456;
	ayush.setdata();
	ayush.getdata();
	employee :: getcount();

	mohit.setdata();
	mohit.getdata();
	employee :: getcount();

	suresh.setdata();
	suresh.getdata();
	employee :: getcount();

	// but to m`aintain the count of the employees we can have a static var
 	
}