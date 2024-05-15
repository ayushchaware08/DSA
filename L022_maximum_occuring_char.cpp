#include<iostream>
using namespace std;

class Solution
 {
    public:
        int arr[26] ={0};
    char getMaxOccuringChar(string str)
    {
        for(int i = 0; i<str.length(); i++){
            char ch = str[i];
            int num = 0;
            
            if(ch >= 'a' && ch <='z'){  //Lowecase
                num = ch - 'a';
            }
            
            // if(ch >= 'A' && ch <= 'Z'){ // uppercase
			else{
                num = ch -'A';
            }
            arr[num]++;
            
        }

		// Maximum occurin Character
        int maxi = -1;
        int ans = 0;
        for ( int i =0; i<26; i++){
           
		    if(maxi < arr[i]){
                ans = i;
                maxi = arr[i];
            } 
        }
        char finalans = 'a'+ ans;
        cout<<"Maximum Repeating Char: "<<finalans<<endl;
    }

 };

int main(){
	string a;
	cout<<"Enter the String: ";
	cin>>a;
	Solution getans;
	getans.getMaxOccuringChar(a);

}