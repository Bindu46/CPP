#include <iostream>
using namespace std;

int main() {
    int n, x, last = -1;

    cout << "Enter array size: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            last = i;
    }

    if (last != -1)
        cout << "Last occurrence is at index: " << last;
    else
        cout << "Element not found";

    return 0;
}