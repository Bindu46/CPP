#include <iostream>
using namespace std;

int main() {
    int a, b;
    int *p1, *p2;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Store addresses in pointers
    p1 = &a;
    p2 = &b;

    cout << "\nBefore swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Swapping using pointers
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}