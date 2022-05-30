#include <iostream>
using namespace std;
class r;
class q;
class p
{
    private:
    int x;
    public:
    void input()
    {
        cout << "Enter first no:- ";
        cin >> x;
    }
    friend void largest(p, q, r);

};
class q
{
    private:
    int y;
    public:
    void input()
    {
        cout << "Enter second no:- ";
        cin >> y;
    }
    friend void largest(p, q, r);
};

class r
{
    private:
    int z;
    public:
    void input()
    {
        cout << "Enter third no:-  ";
        cin >> z;
    }
    friend void largest(p, q, r);
};

void largest(p ob1, q ob2, r ob3)
{
    int large = ob1.x;
    if(ob2.y > large)
    large = ob2.y;
    if(ob3.z > large)
    large = ob3.z;
    cout <<"Largest no is:- " << large;
}

int main()
{
    p ob1;
    q ob2;
    r ob3;
    ob1.input();
    ob2.input();
    ob3.input();

    largest(ob1, ob2, ob3);
    return 0;

}