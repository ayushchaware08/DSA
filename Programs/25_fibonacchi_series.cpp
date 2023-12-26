// Print a Fibonacchi Series

#include <iostream>
using namespace std;
int main()
{
	int n = 10;
	int a = 0, b = 1;
	for (int i = 0; i < n; i++)
	{
	 	int next_num = a + b;
		cout << next_num << ", ";
		a =b;
		b = next_num;
	}
}