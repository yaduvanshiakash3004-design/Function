#include <iostream>
using namespace std;

int findIndex(int arr[], int n, int i, int m) {
    // Base Case
    if (i == n)
        return -1;

    // If element found
    if (arr[i] == m)
        return i;

    // Recursive Call
    return findIndex(arr, n, i + 1, m);
}

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    cout << findIndex(arr, n, 0, m);

    return 0;
}