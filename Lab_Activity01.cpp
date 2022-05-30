#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string name;
    int roll_no;
    string address;
    int marks;

public:
    student(string nam, int roll, string add, int mar)
    {
        name = nam;
        roll_no = roll;
        address = add;
        marks = mar;
    }

    void display()
    {
        cout << "\n\n--------------- STUDENT INFO IS:----------------";
        cout << "\nName is:-  " << name;
        cout << "\nRoll no is:-  " << roll_no;
        cout << "\nAddress is:-  " << address;
        cout << "\nMarks is:-  " << marks;
    }

    ~student()
    {
        cout << "\n\n\nStudent Info is closed!!";
    }
};

class course
{
private:
    string course_name;
    int course_code;
    string faculty_name;
    string student_enrolled;

public:
    course(string c_name, int c_code, string fac_name, string stu_enrolled)
    {
        course_name = c_name;
        course_code = c_code;
        faculty_name = fac_name;
        student_enrolled = stu_enrolled;
    }

    void disp()
    {
        cout << "\n\n-------------------COURSE INFO IS:------------------";
        cout << "\n Course Name is:-  " << course_name;
        cout << "\n Course code is:-  " << course_code;
        cout << "\n Faculty name is:- " << faculty_name;
        cout << "\n Student enrolled is:-  " << student_enrolled;
    }

    ~course()
    {
        cout << "\n\n\nCourse Info is closed!!";
    }
};

int main()
{
    student s1("Akash Bhat", 01, "Jammu", 100);
    s1.display();
    course c1("Programming with c++ Lab", 411, "Mr.Anil Gupta", "Akash Bhat");
    c1.disp();
    return 0;
}