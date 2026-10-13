#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of students must be positive." << endl;
        return 0;
    }

    int *marks = new int[n];

    int total = 0;

    cout << "Enter marks of " << n << " students:\n";

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double average = (double)total / n;

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    delete[] marks;

    cout << "Dynamic memory released successfully." << endl;

    return 0;
}
