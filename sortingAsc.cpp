#include <iostream>
#define SIZE 10
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[SIZE], n;

    cout << "Enter the length of the array (max " << SIZE << "): ";
    cin >> n;

    if (n > SIZE) {
        cout << "Length exceeds maximum size of " << SIZE << endl;
        return 1;
    }

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);
    cout << "Array sorted using Bubble Sort: ";
    printArray(arr, n);

    // Resetting the array for the next sort
    cout << "Enter " << n << " elements of the array again: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion Sort
    insertionSort(arr, n);
    cout << "Array sorted using Insertion Sort: ";
    printArray(arr, n);

    // Resetting the array for the next sort
    cout << "Enter " << n << " elements of the array again: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort
    selectionSort(arr, n);
    cout << "Array sorted using Selection Sort: ";
    printArray(arr, n);

    return 0;
}
