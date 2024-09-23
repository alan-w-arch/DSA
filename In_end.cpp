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

void printList() {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
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
    
    int last;
    cout << "Enter the data to insert at the end: ";
    cin >> last;
    insertNode(last);
    
    
    cout << "List after inserting at the beginning: ";
    printList();
    return 0;
}