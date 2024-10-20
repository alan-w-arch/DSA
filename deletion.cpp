#include <iostream>
#define SIZE 10
using namespace std;

int main(){
    int arr[SIZE],n,e;
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


    cout<<endl<<"Enter the no. to delete :";
    cin>>e;
    
    for(int i=0; i<n;i++)
    {
        if(arr[i]==e)
        {
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            if(i<n && arr[i]==e)
            {
                i--;
            }
        }
    }
    
    for(int i=0; i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}