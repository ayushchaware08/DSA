#include<iostream>
using namespace std;

// Pivot Function
int getpivot(int arr[],int n){
	int s = 0, e = n-1;
	int mid = s + (e-s)/2;
	while(s<e){
		if (arr[mid]>=arr[0]){ // line 1
			s = mid +1;
		} 
		else{ // Line 2
			e = mid;
		}
		mid = s + (e-s)/2;
	}
	return s;
}

int main(){
	int arr[5] = {7,9,1,2,3};
	int n = 5;
	cout<<"Pivot is "<<getpivot(arr,n);
	
}