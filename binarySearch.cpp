#include <iostream>

using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Function to perform binary search on a sorted array
int binarySearchArray(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

// Function to create a new node for the linked list
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to perform binary search on a sorted linked list
int binarySearchLinkedList(Node* head, int target) {
    Node* slow = head;
    Node* fast = head;

    // Find the middle node using the slow and fast pointer technique
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // Now slow is at the middle of the linked list
    while (head != nullptr) {
        if (head->data == target) {
            return 1; // Target found
        }
        else if (head->data < target) {
            // If the target is greater than the current node's data,
            // we can skip the left half of the list
            if (head == slow) {
                break; // If we reach the middle, we can't go further
            }
        }
        head = head->next; // Move to the next node
    }
    return -1; // Target not found
}

// Function to print the linked list
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Binary search in an array
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target value to search in the array: ";
    cin >> target;

    int result = binarySearchArray(arr, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    // Binary search in a linked list
    Node* head = createNode(1);
    head->next = createNode(3);
    head->next->next = createNode(5);
    head->next->next->next = createNode(7);
    head->next->next->next->next = createNode(9);
    head->next->next->next->next->next = createNode(11);
    head->next->next->next->next->next->next = createNode(13);
    head->next->next->next->next->next->next->next = createNode(15);

    cout << "Linked List: ";
    printLinkedList(head);

    cout << "Enter the target value to search in the linked list: ";
    cin >> target;

    result = binarySearchLinkedList(head, target);
    if (result != -1) {
        cout << "Element found in the linked list." << endl;
    } else {
        cout << "Element not found in the linked list." << endl;
    }

    return 0;
}
