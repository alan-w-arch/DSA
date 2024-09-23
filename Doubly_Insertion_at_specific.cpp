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

void in_at_random(int pos,int data){
    node* new_node = new node;
    new_node->prev = nullptr;
    new_node->data = data;
    new_node->next = nullptr;
   
    if (pos == 1) {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }else{
        node* temp = head;
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
        
        }
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
    cout<<"Enter the position where to add :";
    cin>>pos;
    cout<<"Enter the data for the node to add :";
    cin>>d;
    in_at_random(pos,d);
    cout<<"List after adding node at random :";
    prin();
    return 0;
}