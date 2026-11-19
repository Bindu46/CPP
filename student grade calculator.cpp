#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, total;
    float average;

    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    average = total / 3.0;

    cout << "Total Marks = " << total << endl;
    cout << "Average = " << average << endl;

    if (average >= 90)
        cout << "Grade: A";
    else if (average >= 75)
        cout << "Grade: B";
    else if (average >= 50)
        cout << "Grade: C";
    else
        cout << "Grade: Fail";

    return 0;
}