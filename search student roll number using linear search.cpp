
#include <iostream>
using namespace std;

int main()
{
    int roll[100], n, key, i;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter student roll numbers: ";
    for(i = 0; i < n; i++)
    {
        cin >> roll[i];
    }

    cout << "Enter roll number to search: ";
    cin >> key;

    for(i = 0; i < n; i++)
    {
        if(roll[i] == key)
        {
            cout << "Student found at position " << i + 1;
            return 0;
        }
    }

    cout << "Student not found";

    return 0;
}
