// https://bit.ly/3EstWN7 

#include<iostream>
using namespace std;


// using while loop
int insertionsort2(int arr[], int n){
	
}


// using For loop
int insertionsort1(int arr[],int n){
	for(int i =1; i <n; i++){
		//targeted element
		int temp = arr[i];
		int j = i-1;
		for(;j>=0 ;j--){

			// Shift to next index
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{ //stop (i.e allredy sorted)
				break;
			}
		}
		arr[j+1]=temp;  // put our targeted ele to its disired position
	}
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[10] = {10, 20, 90, 4, 87, 43, 54, 25, 18, 30};
	int n = 10;
	insertionsort1(arr, n);
}