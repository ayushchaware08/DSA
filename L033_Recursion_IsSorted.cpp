#include<iostream>
using namespace std;

bool issorted(int *arr, int size){
	// base case 
	if(size ==0 || size == 1){
		return true;
	}

	//processing
	if (arr[0]>arr[1]){
		return false;
	} 

	// recursive case
	else{
		bool remainingarray = issorted(arr+1, size -1);
		return remainingarray;
	}

}

int main(){
	int arr[5] = {2,5,6,7 ,8};
	int size = 5;
	bool ans = issorted(arr, size);

	if (ans) {
		cout<< "IS SORTED ;)"<< endl;
	}
	else	
		cout<< "IS Not SORTED ;)"<< endl; 
} 