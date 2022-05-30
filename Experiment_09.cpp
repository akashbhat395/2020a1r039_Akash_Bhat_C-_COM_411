#include<iostream>
using namespace std;
class sample
{
    int s1, s2;
    public:
            sample(int x, int y)
            {
                s1 = x;
                s2 = y;
                cout << "\n\nOriginal Values are:- " << s1 << " "  << "and" << " " <<  s2;
            }

            sample(sample &s)
            {
                s1 = s.s1;
                s2 = s.s2;
                cout << "\n\nCopied Values are:- "  << s1 << " "  << "and" << " " <<  s2;
            }

};

int main()
{
    sample s(4, 5);
    sample so(s);
    return 0;
}