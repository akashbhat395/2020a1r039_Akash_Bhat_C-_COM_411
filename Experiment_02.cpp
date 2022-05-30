#include<iostream>
using namespace std;
class student
{
    private:
            char name[25];
            float marks;
            int rollNo;
    public:
            void input()
            {
                cin >> name >> marks >> rollNo;
            }
            void displayall()
            {
                cout << "\nName is:-  " << name;
                cout << "\nMarks is:-  " << marks;
                cout << "\nRoll no is:-  " << rollNo;
            }

            void display()
            {
                cout << name;
                cout << " has the highest marks";
            }

            float marksreturn()
            {
                return marks;
            }

            
};
int main()
{
    student s[25];
    int n, i, loc, k;
    cout << " \n\nEnter the number of students:- ";
    cin >> n;
    for(i=0;i<=n-1;i++)
    {
        k = i + 1;
        cout << "Enter name: Enter marks: Enter rollNo: " << endl;
        s[i].input();
    }

    cout << "\nDetails of student are: ";
    for(i=0;i<=n-1;i++)
    {
        s[i].displayall();
    }
    float marks = 0.0;
    loc = 0;
    for(i=0;i<=n-1;i++)
    {
        if(marks < s[i].marksreturn())
        {
            marks = s[i].marksreturn();
            loc = 1;
        }
    }

    for(i=0;i<=n-1;i++)
    {
        s[i].display();
    }



}