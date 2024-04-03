#include <iostream>
using namespace std;

// if POssible solution
bool isPossible(int arr[], int n, int m, int mid)
{
	int studentcount = 1; // student count
	int pagesum = 0;	  // page sum
	// compare sum to mid
	for(int i = 0; i < n; i++)
	{
		if (pagesum + arr[i] <= mid)
		{ // possible solution
			int pagesum = pagesum + arr[i];
		}
		else
		{
			studentcount++;
			if (studentcount > m || arr[i] > mid)
			{
				return false;
			}
			int Pagesum = arr[i];
		}
	}
	return true;
}

int findinpages(int arr[], int n, int m)
{
	int s = 0;
	int sum = 0;
	// Sum function;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	int e = sum;
	int ans = -1;
	//   Binary Search
	int mid = s + (e - s) / 2;
	while(s <= e)
	{
		if (isPossible(arr, n, m, mid))
		{
			ans = mid;
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
		mid = s + (e - s) / 2;
	}
	return ans;

}
int main()
{
	int arr[5]= {10,20, 30,40,50};
	int n = 5 , m= 2;
	int s = 0, e = n;
	int mid = s + (e-s)/2;
	isPossible(arr,n,m,mid);
	findinpages(arr,n,m);
}