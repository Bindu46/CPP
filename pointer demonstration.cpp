#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to find sum of array using pointer
int findSum(int *arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + *(arr + i);
    }

    return sum;
}

// Function to find largest element using pointer
int findLargest(int *arr, int size)
{
    int largest = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > largest)
        {
            largest = *(arr + i);
        }
    }

    return largest;
}

int main()
{
    int a, b;
    int numbers[5];

    cout << "===== POINTER DEMONSTRATION =====" << endl;

    // Taking input
    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    // Pointer declaration
    int *p1 = &a;
    int *p2 = &b;

    // Display values and addresses
    cout << "\n--- Basic Pointer Operations ---" << endl;

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Value stored in p1 = " << p1 << endl;
    cout << "Value pointed by p1 = " << *p1 << endl;

    cout << "\nValue of b = " << b << endl;
    cout << "Address of b = " << &b << endl;
    cout << "Value stored in p2 = " << p2 << endl;
    cout << "Value pointed by p2 = " << *p2 << endl;

    // Swapping using pointers
    cout << "\n--- Swapping Using Pointers ---" << endl;

    cout << "Before swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapNumbers(p1, p2);

    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Array input
    cout << "\n--- Array Using Pointer ---" << endl;

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    // Pointer pointing to first array element
    int *ptr = numbers;

    cout << "\nArray elements using pointer:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << " = "
             << *(ptr + i) << endl;
    }

    // Display addresses
    cout << "\nAddresses of array elements:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Address of element " << i + 1
             << " = " << (ptr + i) << endl;
    }

    // Sum
    int sum = findSum(ptr, 5);

    cout << "\nSum of array elements = " << sum << endl;

    // Largest
    int largest = findLargest(ptr, 5);

    cout << "Largest element = " << largest << endl;

    // Changing array element using pointer
    cout << "\n--- Changing Array Element Using Pointer ---" << endl;

    cout << "Before changing: " << numbers[0] << endl;

    *ptr = 100;

    cout << "After changing: " << numbers[0] << endl;

    cout << "\n===== PROGRAM COMPLETED =====" << endl;

    return 0;
}