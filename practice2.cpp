// Basic PRogram
//  Average of 3 number
// #include<iostream>
// using namespace std;
// int main()
// {
// int a, b, c;
// cout<< "Enter three Numbers"<<endl;
// cin>> a;
// cin>> b;
// cin>> c;
// // to calculate the average
// float avg = (a+b+c)/3;
// cout<< "Average of three number is : "<< avg << endl;
// }

// +ve -ve n
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int num;
// 	cout<< "Enter the Num : " << endl;
// 	cin>> num;
// 	if (num > 0)
// 	{
// 		cout<< "This is Positive number";
// 	}
// 	else if (num == 0){
// 		cout<< "This is Zero";
// 	}
// 	else if  (num < 0)
// 	{
// 		cout<< " This is Negative Number";
// 	}
// 	return 0;
// }

//  +ve -ve n?
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int num ;
// 	cout<< " entre the number : "<< endl;
// 	cin >> num;
// 	if(num==0)
// 	{
// 		cout<<num<<" is Zero"<<endl;
// 	}
// 	else if(num<0)
// 	{
// 		cout<<num<<" is Negaitve"<<endl;
// 	}
// 	if(num>0)
// 	{
// 		cout<<num<<" is Positive"<<endl;
// 	}
// }

//  VALID TRIANGLE
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int a, b ,c;
// 	cout << "Input the Sides of Triangle"<< endl;
// 	cin >> a;
// 	cin >> b;
// 	cin >> c;
// 	if (a+b > c && b+c > a && c+a > b)
// 	{
// 		cout<< "Yes It's a Triangle"<<endl;
// 	}
// 	else{
// 		cout<< "Not a Triangle"<< endl;
// 	}
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n = 4;
// 	int nn = ~n;
// 	cout<<nn<<endl;
// 	// cout<<"Enter the number you want to Print number till : "<< endl;
// 	// cin >> n;
// 	// for(int i = 1; i<=n; i++ )
// 	// {
// 	// 	cout<< i<<endl;
// 	// }

#include <iostream>
using namespace std;
int bs(int arr[], int size, int key)
{
	int start = 0, end = size - 1;
	int mid = start + (end - start) / 2;
	while (start <= end)
	{
		if (arr[mid] == key)
		{
			return mid;
		}
		if (arr[mid] > key)
		{
			end = mid - 1;
		}
		if (arr[mid] < key)
		{
			start = mid + 1;
		}
		mid = start + (end-start) / 2;
	}
	return -1;
}
int main()
{
	int arr[5] = {1, 3, 5, 7, 9};
	int key = 5;
	// cin>> key;
	int index = bs(arr, 5, key);
	cout << index+1<<" postion";

	// return 0;
}