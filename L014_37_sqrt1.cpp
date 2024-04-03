// sqrt(39)=6.244

#include <iostream>
using namespace std;

// function to get int value of root i.e 6
long long int sqrtint(int n)
{
	int s = 0;
	int e = n;
	long long int mid = s + (e - s) / 2;
	long long int ans = -1;
	while (s <= e)
	{
		long long int sq = mid * mid; // not in range

		if (sq == n)
		{
			return mid;
		}

		if (sq > n)
		{
			e = mid - 1;
		}
		// if(sq < n)
		else
		{
			ans = mid;
			s = mid + 1;
		}
		mid = s + (e - s) / 2;
	}
	return ans;
	cout << "going to loop";
}

// for more decimal values i.e .244
double moreprecision(int n, int precision, int tempsol)
{
	double factor = 1;
	double ans = tempsol;
	for (int i = 0; i < precision; i++)
	{
		factor = factor / 10; // 0.1
		for (double j = 0; j * j < n; j = j + factor)
		{
			ans = j;
		}
	}
	return ans;
}

// Check Iterations
double iteration(int n, int precision, int tempsol)
{
	double factor = 1;
	double ans = tempsol;
	for (int i = 0; i < precision; i++)
	{
		cout<<"Iteration"<<i<<endl<<" ans = "<<ans;
		factor = factor / 10; // 0.1
		cout<<" Factor = "<<factor;
		for (double j = 0; j * j < n; j = j + factor)
		{
			ans = j;
			cout<<"updated ans = "<<ans;
		}
		cout<<endl;
	}
	return ans;
}



int main()
{
	int x;
	cout<<"Enter the Number: ";
	cin>>x;

	int tempsol = sqrtint(x);
	cout << "Answer is " << moreprecision(x, 3, tempsol) << endl;

	// check iteration
	// cout<<"Iteration are "<<iteration(x, 3, tempsol)<<endl;


	return 0;
}



// iterations
// I1 -> 
// 		6 = ans;
// 		j*j < n -> 6*6<39 , j+factor -> 6+0.1 -> 