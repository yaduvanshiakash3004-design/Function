#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000][1000];

    // input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int maxSum = -1;
    int index = 0;

    // check each column
    for (int j = 0; j < n; j++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            index = j + 1; // 1-based index
        }
    }

    cout << index << " " << maxSum;

    return 0;
}