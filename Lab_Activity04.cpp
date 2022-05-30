#include <iostream>
#include <string>
using namespace std;
class student
{

public:
    string name;
    int rollNo;
    int marks;
    int check;
    void getInfo()
    {
        cout << "\nEnter the name of Student:- ";
        cin >> name;
        cout << "\nEnter the Roll no of Student:- ";
        cin >> rollNo;
        cout << "\nEnter the Marks of the Student:- ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n\nName of the Student is:- " << name;
        cout << "\n\nRoll no of the Student is:- " << rollNo;
        cout << "\n\nMarks of the Student is:- " << marks;
    }

    void search()
    {
        cout << "\n\nEnter the Roll no of Student to search:- ";
        cin >> check;
        if (check == rollNo)
        {
            cout << "the details of the student are:- "
                 << "\nName: " << name << "\nRollno: " << rollNo << "\nMarks: " << marks << endl;
        }
    }
};

int main()
{
    student s[30];
    int n, i;
    cout << "Enter the number of students: ";
    cin >> n;
    for (i=0; i<n; i++)
    {
        s[i].getInfo();
    }
    
    cout << endl;

    for (i=0; i<n; i++)
    {
        s[i].display();
    }

    for (i=0; i<n; i++)
    {
        s[i].search();
    }
    return 0;
}