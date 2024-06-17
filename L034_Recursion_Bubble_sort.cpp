#include<iostream>
using namespace std;

void sort(int *arr, int n){
	//allready sorted
	if(n == 0 || n ==1){ 
		return ;	
	}

	// case 1 solved
	for(int i =0; i<n-1 ; i++){
		if(arr[i]> arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}


	// recusive sort
	sort(arr, n-1);

}

int main(){
	int arr[5] ={2,4,2,9,4};
	sort(arr,5);

	for(int i = 0; i<5; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;

}