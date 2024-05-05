#include<iostream>
using namespace std;

class test{
	int a;
	int b;

	public:
	// initilization list
	// test(int i, int j) : a(i), b(j)
	// test(int i, int j) : a(i), b(a+j)
	test(int i, int j) : b(j), a(i)  // throw garbage value
	{
		cout<<"Value of a: "<<a<<endl;
		cout<<"Value of b: "<<b<<endl;
	}
};
int main()
{
	test t1(12, 23);

	



}