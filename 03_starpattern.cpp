// Output: for n=3
// * * * *
// * * * *
// * * * *
// * * * *

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int i=1;

    while(i<=n)     //for ROWS
    {
        int j=1;
        while(j<=n)  //for COLUMNS
        {
            cout<<"* ";
            j=j++;
        }
        cout<<"\n";
        i=i++;
    }
}

// for output as
// * * * * * 
// * * * *
// * * * 
// * * 
// *
// or  
//  1 1 1 1 1 
//  2 2 2 2
//  3 3 3
//  4 4
//  5
// just change int j=n; 