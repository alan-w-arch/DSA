#include <iostream>
#define SIZE 10
using namespace std;

int main(){
    int arr[SIZE],n,index[SIZE],e,j=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin>>e;
    for(int i=0;i<n;i++){
        if(arr[i]==e){
            index[j]=i;
            j++;
        }
        
    }
    if(j == 0){
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index: ";
        for(int i = 0; i < j; i++){
            cout << index[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
