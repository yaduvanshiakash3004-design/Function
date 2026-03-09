#include <iostream>
using namespace std;

// Function for Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    // N cannot be negative
    if(N < 0) return 0;

    int arr[N];

    // Taking array input
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Call bubble sort function
    bubbleSort(arr, N);

    // Print sorted array
    for(int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}