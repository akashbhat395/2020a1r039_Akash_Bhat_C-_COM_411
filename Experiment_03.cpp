#include <iostream>
using namespace std;
struct student
{
    char name[100];
    float marks;
    int rollno;
};

int main()
{
    student s[100];
    int n, i, loc;
    float marks1;
    cout << "\n Enter the number of students: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "\n Enter name, marks and rollno of student: " <<i+1;
        cin >> s[i].name >> s[i].rollno >> s[i].marks;
    }    
    marks1 = 0.0;
    loc = 0;
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > marks1)
        {
            loc = 1;
            marks1 = s[i].marks;
        }
    }
    cout << "\n The student with max marks is: " << s[loc].name << endl;
    return 0;
}
