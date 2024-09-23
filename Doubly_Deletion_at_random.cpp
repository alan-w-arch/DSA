#include <iostream>

using namespace std;

struct node
{
    node* prev;
    int data;
    node* next;
};

node* head = NULL;

void insertion(int data){
    node* new_node = new node;
    new_node->prev = nullptr;
    new_node->data = data;
    new_node->next = nullptr;

    if (head==nullptr)
    {
        head = new_node;
    }else {
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
}

void deleteAtBeginning() {
    node* temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    delete temp;
}

void deleteAtPosition(int position) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete node." << endl;
        return;
    }

    if (position == 1) {
        deleteAtBeginning();
        return;
    }

    node* temp = head;
    int count = 1;
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position. Cannot delete node." << endl;
        return;
    }

    node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    if (nodeToDelete->next != NULL) {
        nodeToDelete->next->prev = temp;
    }
    delete nodeToDelete;
}



void prin(){
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout<<"nullptr"<<endl;
}

int main(){
    int n;
    cout<<" Enter the number of nodes :";
    cin>>n;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        insertion(d);
    }
    cout<<"Original list :";
    prin();

    int pos;
    cout<<"Enter the position of the node to delete :";
    cin>>pos;
    deleteAtPosition(pos);
    
    cout<<"List after adding node at end :";
    prin();
    return 0;
}