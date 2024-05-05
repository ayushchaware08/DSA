
// access modifier

#include <iostream>
using namespace std;

// Public class definition
class Circle
{
public:
    double radius;

    double area()
    {
        return 3.14 * radius * radius;
    }
};

// Private Access Modifier
class circle2
{
private:
    double radius;

public:
    double area()
    {
        return 3.14 * radius * radius;
    }
};

// Protected Access Modifier
class parent
{
protected:
    int protected_id;
    // public:
    //     int give_id(int id)
    //     {
    //         protected_id = id;
    //         return protected_id;
    //     }
};
class child : public parent
{
public:
    void give_id(int id)
    {
        protected_id = id;
    }
    void display()
    {
        cout << protected_id << endl;
    }
};

// main function
int main()
{
    // ----------- Public --------

    Circle obj;
    // accessing public datamember outside class
    obj.radius = 5.5; // batao ki ye value kis data datamember ki hai
    cout << "Area is: " << obj.area();

    // ----------- Private ---------
    circle2 obj1;
    // obj1.radius = 12; // not accessable as private AM
    obj1.area();

    // ----------- protected ---------

    child c1;
    c1.give_id(81);
    c1.display();

    return 0;
}