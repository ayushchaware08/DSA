#include <iostream>
using namespace std;
int main()
{
	int n;
	// cout << "Enter the valur of n : ";
	// cin >> n;
	
	// this is how for executes
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout<< i << " "  << j;
		}
		cout<< endl;
	}
	

	// Implementation of for loop.
	// for( imitilization, condition, updation)
	int i = 1;
	// for(i=0, i<=n;i++)
	// {
	// 	  /*code*/
	// }


	// To print 1 to n;
	for (;;)
	{
		if (i <= n)
		{
			cout << i << endl;
		}
		else{
			break;
		}
		i++;
	}

	//--- GUESS OUTPUT ----
		//----- SAMple 1 ---------
		for (int i=0 ; i<=5 ; i++)
		{
			cout<< i << "  " ;
			i++;
		}
		// output: 0  2  4
		cout<<endl;
		// ---- Sample 2 --------
		for (int i = 0; i < 15; i+=2)
		{
			cout<< i<< " ";
			if(i&1)
			{

				continue;
			}
			i++;
		}
		// output: 0 3 5 7 9 11 13
		
}