#include <iostream>
#define SIZE 10
using namespace std;

int main(){
    int a1[SIZE],a2[SIZE],n1,n2,k=0;
    cout<<"enter the length of array 1 and array 2 : ";
    cin>>n1>>n2;
    cout<<endl<<"enter the elements for array 1"<<endl;
    for(int i=0; i<n1;i++)
    {
        cin>>a1[i];
    }
    cout<<"enter the elements for array 2"<<endl;
    for(int i=0; i<n2;i++)
    {
        cin>>a2[i];
    }
    cout<<"Array 1 : ";
    for(int i=0; i<n1;i++)
    {
        cout<<a1[i]<<" ";
    }
    cout<<endl<<"Array 2 : ";
    for(int i=0; i<n2;i++)
    {
        cout<<a2[i]<<" ";
    }
    cout<<endl<<"concatenated array 1 + array 2 "<<endl;
    for(int i=n1; i<n1+n2;i++){
        a1[i]=a2[k];
        k++;
    }
    cout<<"concatenated array 1 : ";
    for(int i=0; i<n1+n2;i++)
    {
        cout<<a1[i]<<" ";
    }
    return 0;
}