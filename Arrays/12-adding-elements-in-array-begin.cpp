// Problem Statement: Given an array of N integers, 
// write a program to add an array element at the beginning, end, and at a specific position.
#include<iostream>
using namespace std;

// Function to insert an element at the beginning of an array
void insertAtBeginning(int arr[], int& n, int element) {
    // Shift all elements one position to the right
    for (int i = n; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element at the beginning
    arr[0] = element;
    // Increase the size of the array
    ++n;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newElement;
    cout << "Enter the element to be inserted at the beginning: ";
    cin >> newElement;

    insertAtBeginning(arr, n, newElement);

    cout << "Array after insertion at the beginning: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}