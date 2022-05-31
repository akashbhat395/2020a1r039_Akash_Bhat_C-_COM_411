#include <iostream>
using namespace std;
class findarea
{
    public: 
            float r, area;

    void input()
    {
        cout << "Enter radious of circle:";
        cin >> r;
    }

    void calarea()
    {
        area = 3.14 *r*r;
    }
    void display()
    {
        cout << "Area of circle is: " << area;
    }
};

int main()
{
    findarea obj;
    obj.input();
    obj.calarea();
    obj.display();
    return 0;
    
}
