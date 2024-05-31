#include <iostream>
using namespace std;

// to Declare variable

// 1-> ref var(p ref)
void b(int& i)
{ // used reference Var to share the var
	cout<<score<<"in b "<<endl;
	char ch = 'a';
	cout << i << endl;
}
void b2(int& i)
{ // used reference Var to share the var
	cout<<score<<"in b2 "<<endl;
	cout << i << endl;
}

// 2-> pass b val
void a(int i)
{ // pass by value create a copy
	cout << i << endl;
	b(i);
}

// 3->Global Variable
int score = 15;

int main()
{
	int i = 5;
	a(i);
	b(i);

	return 0;
}