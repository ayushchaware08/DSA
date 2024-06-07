#include<iostream>
using namespace std;


void print(int arr[], int s, int e){

	for(int i =s; i<e; i++){
		cout<< arr[i]<< " ";
	}
	cout<<endl;

}


bool binarysearch(int *arr, int s, int e, int k){
	// check each case
	print(arr,s,e);


	// base case
	int mid = s + (e-s)/2;
	// ele found
	if(arr[mid]==k)
		return true;
	// ele not found
	if(s>e)
		return false;

	//check value of mid
	cout<<"mid: " << arr[mid]<<endl;

	if(arr[mid]<k){
		return binarysearch(arr, mid+1, e, k);
	}
	else{
		return binarysearch(arr, s, mid-1, k);
	}

}

int main(){
	int arr[6] = {2,4, 6, 10, 14, 16};
	int size = 6;
	int key = 1;

	int ans = binarysearch(arr,0,size,key);

	if(ans){
		cout<<"Found :)"<<endl;
	}
	else
	 	cout<<"not Found :(" <<endl;
	return 0;
}