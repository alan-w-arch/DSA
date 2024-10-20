#include <iostream>
#define SIZE 10
using namespace std;

int main(){
    int arr[SIZE],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}