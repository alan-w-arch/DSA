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

void insertAtRandom(int data, int pos) {
    node* newNode = new node;
    newNode->data = data;
    newNode->next = nullptr;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        node* temp = head;
        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of range" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
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
    
    int d, pos;
    cout << "Enter the data to insert at random position: ";
    cin >> d;
    cout << "Enter the position: ";
    cin >> pos;
    insertAtRandom(d, pos);
    
    cout << "List after inserting at random position: ";
    printList();
    return 0;
}