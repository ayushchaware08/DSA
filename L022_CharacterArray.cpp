#include <iostream>
using namespace std;

// length function
int getlength(char name[]){
	int count =0;
	for(int i =0; name[i]!='\0';i++){
		count++;
	}
	return count;
}

int main()
{
	char name[20];
	cout << "Enter Your Name: ";
	// cin >> name;  //AyushChaware
	cout << "Your name is "<< name << endl;

	// a null character in your char arr
	// eg: Ayush\0chaware
	name[5]='\0';
	cout<<"your name is "<< name <<endl;

	//Length of char array
	cout<<"Length of the char array is : "<<getlength(name)<<endl;
	

	// check the null character
	char arr[100] = "Apple";
	int i =0;
	while(arr[i] != '\0'){
		cout<<arr[i]<<endl;
		i++;
	}

	// access character
	cout<<"char access : "<< arr[2]<<endl;

	return 0;
}
