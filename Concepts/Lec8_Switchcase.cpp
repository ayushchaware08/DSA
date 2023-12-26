#include <iostream>
using namespace std;
int main()
{
	// -------------------(1)-----------------
	int n = 2;
	switch (n)
	{
	case 1:
		cout << "First" << endl;
		break;
	case 2:
		cout << "Second" << endl;
		break;
	default:
		cout << "It is default case" << endl;
	}
	// output : Second    ----(as num = case '2')

	// -------------------(2)-----------------
	char ch = 'a';
	switch (ch)
	{
	case 1:
		cout << "First" << endl;
		break;
	case '1':
		cout << "Second" << endl;
		break;
	default:
		cout << "This is default case" << endl;
	}
	// Output: This is Default case   -----(ch dosen't maches with any case)

	// try putting cases or default case in comments.

	// -------------------(3)-----------------
	int num = 1;
	switch (num)
	{
	case 1:
		cout << "First case" << endl;
		// break;            -------(move out of he block)
	case '1':
		cout << "second case" << endl;
		break;
	default:
		cout << "default case" << endl;
	}
	// output: First case
	//         second case   ----(as we remove break;)

	// --------------(4)-------------------
	char ch1 = 'a';
	int num1 = 1;
	switch (ch1)
	{
	case 1:
		cout << "First" << endl;
		cout << "first Again" << endl;
		break;
	case 'a':
		switch (num1)
		{
		case 1:
			cout << "The valu of n is" << num1 << endl;
			break;
		}
		break;
	default:
		cout << "Default case" << endl;
	}
	// utput: The valur of n is 1;

	/*
	// ------If switch is stuck in infinite While Loop
	  while (true) 
	 	{ 
         // Your loop logic here
         // Suppose you want to exit the program under a certain condition
         if (condition) {
             std::cout << "Exting the program." << std::endl;
             exit(0);  // This will terminate the program immediately
         }
         // Continue with the loop if the condition is not met.
    	}

	*/
}