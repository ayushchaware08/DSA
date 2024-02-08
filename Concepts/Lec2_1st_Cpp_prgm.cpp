// # include : that tells the compiler to include the contents of the <iostream>
// Iostream : Standard Library and provides functionality for input and output operations
#include <iostream> //PReprocessor Directive
//C++ me The library is defined in a namespace called std
// here we allready mentioned that we are using Std library in whole code   [see Lec2_namespace.cpp ]
using namespace std;

int main()
{
    // cout is just like printf in C

    // here we use std::cout that means use cout from std Library
    // scope operator (::) 
    std::cout<<"Hello World\n";

    //to print new line
    cout<<"N1"<<endl;
    cout<<"N2"<<'\n';
    cout<<"N3 \n";
    cout<<"\n>";

 // -------------- DATA TYPE ---------------
    cout<< "\n Data Type \n"<< endl;
    // Interger
    int a = 1;
    cout<< a<< endl;
    cout << "integer Data Type : " << a << endl;

    // Boolean
    bool b1 = true;
    cout << "Boolean Data Type (True) : " << b1 << endl;
    bool b2 = false;
    cout << "Boolean Data Type (False): " << b2 << endl;

    //Character
    // to be written in '..'
    char c = 'a';
    cout << "Character Data Type : " << c << endl;

    // Float
    float f = 1.2;
    cout << "Float Data Type : " << f << endl;

    // Double
    double d = 1.23;
    cout << "Double Data Type : " << d << endl;

    // -------------- SIZE OF DATA TYPE -----------------
    cout<< "\n Data Size of Data Type  \n" << endl;

    int sizea = sizeof(a);    //4 Byte
    cout << "Size of int a is : " << sizea << endl;
    int sizeb = sizeof(b1);   //2 Byte
    cout << "Size of bool b1 is : " << sizeb << endl;
    int sizec = sizeof(c);    //1 Byte
    cout << "size of Char C is : " << sizec << endl;
    int sizef = sizeof(f);    //4 Byte
    cout << "size of Float f is : " << sizef << endl;
    int sized = sizeof(d);   //8 Byte
    cout << "size of Double is : " << sized << endl;

    //------------- TYPE CASTING -------------------------
    // converting from type of one data type to another dayta type
    int x = 'a';
    cout << x << endl; // ASCII value is printed a=97

    char y = 97;
    cout << y << endl; // Acourding to ASCII value 97=a

    char a1 = 123456;   // gives output as 64 (ASCII value) i.e @
    cout << a1 << endl; // exceed the range

    unsigned int a2 = 112; // unsigned means +ve int
    cout << a2 << endl;
    unsigned int a3 = -112;
    cout << a3 << endl; // gives larger number as output


}
