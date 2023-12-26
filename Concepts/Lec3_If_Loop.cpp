#include <iostream>
using namespace std;
int main()
{

    //------- If Loop -----------
    // Check whether a>b or a<b
    int a, b;
    cout<< "Enter the value of a " <<endl;
    cin >> a;
    cout<< "Enter the value of b" <<endl;
    cin >> b;
    // cin>> a >> b;
    cout << "THe Value of a is " << a << " and b is " << b << "." << endl;
    if (a > b)
    {
        cout << a << " is greater " << endl;
    }
    else
    {
        cout << b << "is Greater"<< endl;
    }
// //------------------------------------------------------
//        //Check a is positive or neagative 
//        int a;
//        cout<< "Enter value of a  :" <<endl;
//        cin>>a;
//        cout<< "value of a is :" << a <<endl;
//        if(a>0)
//        {
//         cout<< a << " is Positive" << endl;
//        }
//        else
//        {
//         if(a<0)
//         {
//          cout<< a << " is Negative" << endl;
//         }
//         else
//         {
//             cout<< a << " is Zero" << endl;
//         }

//-------------------------------------------------------
    //  // a is +ve -ve or 0
    //  int a,b;
    //  cout<< " Ente the value of a : " << endl;
    //  cin>>a;
    //  if(a>0)
    //  {
    //     cout<<  a<< " is Positive" << endl;
    //  }
    //  else if(a==0)
    //  {
    //     cout<< a<< " is Zero "<< endl;
    //  }
    //  else 
    //  {
    //     cout<< a << " is Neagative" <<endl;
    //  }

//-------------------------------------------------------
    // int a=2;
    // int b = a+1;
    // if((a=2)==b)
    // {
    //     cout<<a<<"if part";
    // }
    // else{
    //     cout<<a+1<<"else part";
    // }
//--------------------------------------------------------
    // program to check whether input is in upper case, Lowercase, Numeric
    char ch;
    cout<<"enter Ch : "<<endl;
    cin>>ch;
    int a = ch;
    cout<< "ch : " << endl;
    cout<< "a: " << a << endl;   
    if(a<91 && a>64)
    {
        cout<<"uppercase"<<endl;
    }
    else if (a<123 && a>96)
    {
        cout<<"lowercase"<<endl;
    }
    else if (a<58 && a>47)
    {
        cout<<"numeric"<<endl;
    }
    

    
    


}
