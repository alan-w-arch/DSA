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

void deleteAtEnd() {
    if (head == NULL) {
        cout << "List is empty. Cannot delete node." << endl;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        head = NULL;
    }
    delete temp;
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

    deleteAtEnd();

    cout<<"List after deleting node at end :";
    prin();
    return 0;
}