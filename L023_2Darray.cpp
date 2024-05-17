#include<iostream>
using namespace std;
void print2d(int arr[3][4]){
	for(int i =0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<< arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	// initialize
	// int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	// int arr2[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int arr[3][4];
	

	// input row wise -> 1.0 1.1 1.2
	for(int i =0; i<3; i++){  // row
		for(int j=0; j<4; j++){  // col
			cin>> arr[i][j];
		}
	}

	//// input Col wise -> 1.0 2.0 3.0
	// for(int i =0; i<4; i++){  //col
	// 	for(int j=0; j<3; j++){  //row
	// 		cin>> arr[j][i];
	// 	}
	// }

	// output
	cout<<endl;
	print2d(arr);
	// cout<<"Arr1"<<endl;
	// print2d(arr1);
	// cout<<"Arr2"<<endl;
	// print2d(arr2);	
	


	

	
}