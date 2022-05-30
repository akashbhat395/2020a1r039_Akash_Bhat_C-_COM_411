#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length{0},breadth{0};
public:
    Rectangle() {}
    Rectangle(float i) : 
    length(i), breadth(i)
    {
    }
    Rectangle(float a, float b) :
    length(a), breadth(b)
    {
    }
    void Calculate() {cout << " Area of Rectangle:- " << length * breadth << endl; }

};
int main()
{
    Rectangle r1;
    Rectangle r2{10};
    Rectangle r3{15, 45};
    r1.Calculate();
    r2.Calculate();
    r3.Calculate();
    return 0;
}
