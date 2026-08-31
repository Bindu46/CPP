#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = a[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    if (secondLargest == -1)
        cout << "Second largest element does not exist.";
    else
        cout << "Second largest element = " << secondLargest;

    return 0;
}