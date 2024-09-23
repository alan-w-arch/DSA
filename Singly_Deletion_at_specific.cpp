#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void insertNode(int data) {
    node* newNode = new node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteAtHead() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtPosition(int pos) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    if (pos == 1) {
        deleteAtHead();
        return;
    }
    node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range" << endl;
        return;
    }
    node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

void printList() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        insertNode(data);
    }
    cout << "Original List: ";
    printList();
    
    int pos;
    cout << "Enter the position to delete: ";
    cin >> pos;
    deleteAtPosition(pos);
    cout << "List after deleting at position " << pos << ": ";

    printList();
    return 0;
}
