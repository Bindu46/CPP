#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at the end
void insertNode(int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } 
    else {
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Node inserted successfully.\n";
}

// Delete from the beginning
void deleteNode() {
    if (head == NULL) {
        cout << "Linked List is empty.\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    delete temp;

    cout << "Node deleted successfully.\n";
}

// Display linked list
void display() {
    if (head == NULL) {
        cout << "Linked List is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "Linked List: ";

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {

    int choice, value;

    while (true) {

        cout << "\n----- LINKED LIST MENU -----\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertNode(value);
                break;

            case 2:
                deleteNode();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program ended.\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}