#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << value << " inserted successfully.\n";
}

void display() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

void deleteNode(int value) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << value << " deleted successfully.\n";
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr &&
           temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << value << " not found.\n";
    } else {
        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
        cout << value << " deleted successfully.\n";
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert\n";
        cout << "2. Display\n";
        cout << "3. Delete\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                display();
                break;

            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(value);
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}