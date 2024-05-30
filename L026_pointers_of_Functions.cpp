#include<iostream>
using namespace std;

void print(int *p){
	cout<<*p<<endl; 
}

void updateadd(int *p){
	p= p+1; // address updated
	cout<<"inside func update: "<<p<<endl;
}

void updateval(int*p){
	*p =*p +1; //value updated
}

// int getSum(int arr[], int n ){
int getSum(int *arr, int n ){  //same same
	cout <<endl<<"Size: "<<sizeof(arr)<<endl;
	int sum =0;
	for(int i=0; i<n ; i++){
		sum += arr[i];
		// sum += i[arr]; //same same
	}
	return sum;
}

int main(){
	int value = 5;
	int *p = &value;
	print(p); //pass by value
	cout<<"Before: "<<p<<endl;
	updateadd(p); 
	cout<<"After: "<<p<<endl;	//same

	cout<<"Before: "<<*p<<endl;
	updateval(p);
	cout<<"After: "<<*p<<endl;  //updated

	// get sum
	int arr[6]={1,2,3,4,5,8};
	cout<<"Sum: " <<getSum(arr, 5)<<endl;
	cout<<"Sum: " <<getSum(arr+3, 3)<<endl;


	return 0;
}