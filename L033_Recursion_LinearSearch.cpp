#include<iostream>
using namespace std;

void print(int arr[], int size){
	cout<< "Size of the array is "<< size << endl;

	for(int i =0; i<size; i++){
		cout<< arr[i]<< " ";
	}
	cout<<endl;

}

bool search(int *arr, int size, int key){
    // to see the deep functionning of recursive function
	print(arr, size);


	// base case
	if(size == 0){
		return false;
	}
	// process
	if(arr[0] == key)
	{
		return true;
	}
	else{
	 	bool remainingarray = search(arr+1, size-1, key);
		return remainingarray;
	}
}


int main(){
	int arr[5] = {3, 2, 5, 1, 6};
	int size = 5;
	int key = 8;

	bool ans = search(arr, size, key);
	
	if(ans){
		cout<<"Found :)"<<endl;
	}
	else
	 	cout<<"not Found :(" <<endl;
}
