#include <iostream>
#define SIZE 10
using namespace std;
int arr[SIZE];

void insertInQueue(int n){
    for(int i=0; i<=(n-1);i++)
    {
        cin>>arr[i];
    }
}

void deleteInQueue(int n){
    for(int i=0; i<=(n-2);i++){
        arr[i]=arr[i+1];
    }
}

void displayInQueue(int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void peekInQueue(){
    cout<<arr[0]<<endl;
}

void rearInQueue(int n){
    cout<<arr[n-1]<<endl;
}

int main(){
    int n;
    cout<<"enter the length of array : ";
    cin>>n;
    insertInQueue(n);
    displayInQueue(n);
    peekInQueue();
    rearInQueue(n);
    deleteInQueue(n);
    displayInQueue(n-1);
}