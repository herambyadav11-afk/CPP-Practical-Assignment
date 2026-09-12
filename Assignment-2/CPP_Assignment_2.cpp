#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:

    // Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        marks = 0.0;
    }

    // Parameterized Constructor
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        marks = s.marks;
    }

    //  display student details
    void display()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Marks   : " << marks << endl;
    }

    //  calculate result
    void checkResult()
    {
        if (marks >= 40)
            cout << "Result  : Pass" << endl;
        else
            cout << "Result  : Fail" << endl;
    }
};

int main()
{
    cout << " Default Constructor " << endl;
    Student s1;
    s1.display();
    s1.checkResult();

    cout << "\n Parameterized Constructor" << endl;
    Student s2(101, "Heramb", 85.5);
    s2.display();
    s2.checkResult();

    cout << "\n Copy Constructor " << endl;
    Student s3(s2);
    s3.display();
    s3.checkResult();

    return 0;
}
