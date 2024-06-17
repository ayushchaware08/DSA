#include<iostream>
using namespace std;

int sumarr(int *arr, int size){
	// base case
	int ans = 0, n=0;
	if (size == 0 ){
		return 0;
	}
	if(size == 1){
		return arr[0];
	}

	//recursive
	return arr[0] + sumarr(arr+1, size-1);

	// int remainingpart = sumarr(arr+1, size-1);
	// int sum = arr[0] + remainingpart;
	// return sum;

}

int main(){

	int arr[5] = {3, 2, 5, 1, 6};
	int size = 5;

	cout<<"sum is " <<sumarr(arr, size);

}