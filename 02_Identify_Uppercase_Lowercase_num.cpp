// program to check whether input is in upper case, Lowercase, Numeric
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Give its Input"<<endl;
    cin>>ch;
    int a = ch;
    if(a>64 && a<91)
    {
        cout<< "Given Input is in Uppercase"<< endl;
    }
    else if(a>96 && a<123)
    {
        cout<< "Given input is in Lowercase" << endl;
    }
    else if (a>47 && a<58)
    {
        cout<< "Given input is Numeric" <<endl;
    }
    else
    {
        cout<< "Invalid Input" << endl;
    }
}
