
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert a node at the end
void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }
}

// Display the circular linked list
void display() {
    if (head == NULL) {
        cout << "List is empty";
        return;
    }

    Node* temp = head;

    cout << "Circular Linked List: ";

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "HEAD" << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    display();

    return 0;
}
