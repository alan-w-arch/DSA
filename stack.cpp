#include <iostream>
#define SIZE 10
using namespace std;
int arr[SIZE],n;

void pushInStack(){
    for(int i=0; i<=(n-1);i++)
    {
        cin>>arr[i];
    }
}

void popInStack(){
    n--;
}

void displayInstack(){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void peekInStack(){
    cout<<arr[n-1]<<endl;
}

int main(){
    cout<<"enter the length of array : ";
    cin>>n;
    pushInStack();
    displayInstack();
    peekInStack();
    popInStack();
    displayInstack();
}