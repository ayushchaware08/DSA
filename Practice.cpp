// Find unique
#include <iostream>
using namespace std;
int unique(int arr[], int size)
{
	int ans = 0;
	for (int i = 0; i < size; i++)
	{
		ans = ans ^ arr[i];
	cout << ans << endl;
	}
}
int main()
{
	int arr[5] = {1,2,3,4,3};
	int size = 5;
	// unique(arr, size);
	int ans = 0;
	for (int i = 0; i < size; i++)
	{
		ans = ans ^ arr[i];
	}
		cout << ans << endl;
	for(int i = 1; i < size ; i++){
		ans = ans ^ i;
	}
	cout<<ans;
}

// // Sorting Algorithm - Selection Sort
// #include<iostream>
// using namespace std;
// // Print an array
// void printarray(int arr[], int size)
// {
// 	for (int i = 0; i < size; i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl
// 		 << "Printing Done" << endl;
// }
// // Selection Sort Function
// void selectionsort(int arr[], int n)
// {
// 	for(int i = 0; i<= n-1; i++)
// 	{
// 		int minindex = i;
// 		for(int j = i+1; j<n; j++)
// 		{
// 			if(arr[j]<arr[minindex])
// 			{
// 				minindex = j;
// 			}
// 		}
// 		swap(arr[minindex],arr[i]);
// 	}
// 	printarray(arr,n);
// }
// int main()
// {
// 	int arr[10] = {74, 54, 91, 21, 15, 48, 91, 34, 51, 64};
// 	printarray(arr,10);
// 	cout<< "Sorted Array : ";
// 	selectionsort(arr, 10);
// }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// void reverse(int arr[], int n)
// {
//     int start = 0;
//     int end = n-1;
//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
//     return 0;
// }

// check break in if statement
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int i = 0;
//      while(i<=10)
//      {
//          cout<< i <<endl;
//          // if (i==5)
//          // {continue;}
//          i++;
//      }
//  }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int i=5;
//     // cout<< i++ <<endl;
//     cout<< ++i <<endl;
// }

/*
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
// convert dec into binary
int n;
	cout << "Enter Decimal Number : ";
	cin >> n;

	int ans = 0;
	int i = 0;
	while (n != 0)
	{
		int bit = n & 1;
		ans = (bit * pow(10, i)) + ans;
		n = n >> 1;
		i++;
	}
	cout << "Answer is " << ans << endl;
	*/

/*
int n;
cout<<"ENter : ";
cin>>n;

int i=1;
while(i<=n)
{
	int j=1;
	while(j<=n)
	{
		cout<<i<<" ";
		j=j+1;
	}
	cout<<endl;
	i=i+1;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the number: " << endl;
cin>>n;
int i=1;
while(i<=n)
{
	int j=1;
	while(j<=n)
	{
		cout<< n-j+1<<" ";
		j=j+1;
	}
	cout<<endl;
	i=i+1;

}
*/

// int a,b;
// cin>>a;
// cin>>b;
// if(a>b)
// {
//     cout<< a << " is greater than "<< b << endl;
// }
// else{
//     cout<< a << " is less than " << b<<endl;
//
// int a = 2;
// cout<< a << endl;
// int b;
// cout<<"Enter the value of b: "<<endl;
// cin>> b;
// cout<< " the valur of b is : " << b << endl;
