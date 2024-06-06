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


	 

}

int main(){
	int arr[6] = {2,4, 6, 10, 14, 16};
	int size = 6;
	int key = 16;

	int ans = binarysearch(arr,0,size,key);

	if(ans){
		cout<<"Found :)"<<endl;
	}
	else
	 	cout<<"not Found :(" <<endl;
	return 0;
}