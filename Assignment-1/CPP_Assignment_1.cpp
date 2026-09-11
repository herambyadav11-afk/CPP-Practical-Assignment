#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks1, marks2, marks3;

public:

   
    Student(string n, int r, float m1, float m2, float m3)
    {
        name = n;
        rollNo = r;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;

        cout << "\nConstructor called: Student object created." << endl;
    }

   
    float calculateTotal()
    {
        return marks1 + marks2 + marks3;
    }

   
    float calculatePercentage()
    {
        return calculateTotal() / 3.0;
    }

   
    void displayDetails()
    {
        cout << "\nStudent Details " << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll No.    : " << rollNo << endl;
        cout << "Total Marks : " << calculateTotal() << " / 300" << endl;

        cout << fixed << setprecision(2);
        cout << "Percentage  : " << calculatePercentage() << "%" << endl;
    }

   
    ~Student()
    {
        cout << "\nDestructor called: Student object destroyed." << endl;
    }
};

int main()
{
    string name;
    int rollNo;
    float m1, m2, m3;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    
    Student s(name, rollNo, m1, m2, m3);

   
    s.displayDetails();

    return 0;
}
