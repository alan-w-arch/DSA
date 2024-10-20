#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void pushInStack(int data) {
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

void popInStack() {
    if (head == nullptr) {
        cout << "Stack is empty" << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void peekInStack(){
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    cout << temp->data << endl;
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
    cout << "Enter the number of nodes to be pushed: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        pushInStack(data);
    }
    cout << "Original Stack: ";
    printList();
    peekInStack();
    popInStack();
    cout << "Stack after pop: ";
    printList();
    
    return 0;
}