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
	cin >> name;  //AyushChaware
	cout << "Your name is "<< name << endl;

	// a null character in your char arr
	// eg: Ayush\0chaware
	name[5]='\0';
	cout<<"your name is "<< name <<endl;

	//Length of String
	cout<<"Length of the String is : "<<getlength(name)<<endl;
	

	

	return 0;
}
