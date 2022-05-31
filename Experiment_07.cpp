#include <iostream>
using namespace std;
class constr
{
    private:
    float x, y;

    public:
     constr( float x1, float y1)
    {
        x = x1;
        y = y1;
    }

    constr(constr &s)
    {
        x = s.x;
        y = s.y;
    }

    void display()
    {
        cout << x << y << endl;
    }

};

int main()
{
    constr s1(12, 15), s2(s1);
    s1.display();
    s2.display();
    return 0;
}
