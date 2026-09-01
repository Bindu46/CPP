#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 5, 3, 2, 5, 7, 8, 3};
    int n = 8;

    cout << "Duplicate elements: ";

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}