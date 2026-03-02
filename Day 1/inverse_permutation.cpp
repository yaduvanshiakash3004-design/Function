#include <iostream>
using namespace std;

void inverseArray(int arr[], int inv[], int n, int i) {
    // Base Case
    if (i == n)
        return;

    // Recursive call
    inverseArray(arr, inv, n, i + 1);

    // Work after recursion
    inv[arr[i]] = i;
}

int main() {
    int n;
    cin >> n;

    int arr[1000], inv[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    inverseArray(arr, inv, n, 0);

    for (int i = 0; i < n; i++) {
        cout << inv[i] << " ";
    }

    return 0;
}