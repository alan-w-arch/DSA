#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void enqueueInQueue(int data) {
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

void dequeueInQueue() {
    if (head == nullptr) {
        cout << "Queue is empty" << endl;
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}

void peekInQueue(){
    if (head == nullptr) {
        cout << "Queue is empty" << endl;
        return;
    }else
    {
        cout << head->data << endl;
        return;
    }
}

void rearInQueue(){
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    cout<<temp->data<<endl;
    return;
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
        enqueueInQueue(data);
    }
    cout << "Original Queue: ";
    printList();
    peekInQueue();
    rearInQueue();
    dequeueInQueue();
    cout << "Queue after deletion : ";
    printList();
    
    return 0;
}