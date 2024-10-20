#include <iostream>
#define SIZE 10
using namespace std;

int main(){
    int arr[SIZE],n,e,p;
    cout<<"enter the length of array : ";
    cin>>n;
    for(int i=0; i<=(n-1);i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=(n-1);i++)
    {
        cout<<arr[i];
    }
    cout<<"enter the no. to add and its position :"<<endl;
    cin>>e>>p;
    //adding new no.
    for(int i=n; i>=p;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[p]=e;
    //printing new array
    for(int i=0; i<=5;i++)
    {
        cout<<arr[i];
    }

    return 0;
}