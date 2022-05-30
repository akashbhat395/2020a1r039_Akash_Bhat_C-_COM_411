#include <iostream>
using namespace std;
class factorial
{
public:
    int fact(int n)
    {
        int i, f = 1;
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        return f;
    }
};

int main()
{
    int n, f = 1;
    cout << "\nEnter the number: ";
    cin >> n;
    factorial find;
    f = find.fact(n);
    cout << "\nThe Factorial of the entered number is = " << f;
    return 0;
}
