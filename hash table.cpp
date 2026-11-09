
#include <iostream>
using namespace std;

#define SIZE 10

int hashTable[SIZE];

// Insert element
void insert(int key)
{
    int index = key % SIZE;

    while (hashTable[index] != -1)
    {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
    cout << "Element inserted successfully\n";
}

// Search element
void search(int key)
{
    int index = key % SIZE;
    int start = index;

    while (hashTable[index] != -1)
    {
        if (hashTable[index] == key)
        {
            cout << "Element found at index " << index << endl;
            return;
        }

        index = (index + 1) % SIZE;

        if (index == start)
            break;
    }

    cout << "Element not found\n";
}

// Display hash table
void display()
{
    cout << "\nHash Table:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " --> " << hashTable[i] << endl;
    }
}

int main()
{
    int choice, key;

    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    do
    {
        cout << "\n1. Insert";
        cout << "\n2. Search";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter element: ";
                cin >> key;
                insert(key);
                break;

            case 2:
                cout << "Enter element to search: ";
                cin >> key;
                search(key);
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}
