#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter student marks: ";
    cin >> marks;

    cout << "Marks before using pointer and reference = " << marks << endl;

    int *p = &marks;

    cout << "Address of marks = " << &marks << endl;
    cout << "Address stored in pointer = " << p << endl;

    *p = 78;

    cout << "Marks after using pointer = " << marks << endl;

    int &ref = marks;
    ref = 95;

    cout << "Marks after using reference = " << marks << endl;

    return 0;
}
