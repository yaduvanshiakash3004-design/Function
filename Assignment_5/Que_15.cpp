#include <iostream>
#include <algorithm>
using namespace std;

bool canPaint(int boards[], int n, int k, long long maxTime) {
    int painters = 1;
    long long time = 0;

    for (int i = 0; i < n; i++) {

        // if one board itself is bigger than maxTime → not possible
        if (boards[i] > maxTime) return false;

        if (time + boards[i] <= maxTime) {
            time += boards[i];   // same painter continues
        } else {
            painters++;          // new painter
            time = boards[i];
        }
    }

    return painters <= k;
}

int main() {
    int k, n;
    cin >> k >> n;

    int boards[100];
    for (int i = 0; i < n; i++) {
        cin >> boards[i];
    }

    long long low = 0, high = 0;

    // calculate total length
    for (int i = 0; i < n; i++) {
        high += boards[i];
    }

    long long answer = high;

    // binary search
    while (low <= high) {
        long long mid = (low + high) / 2;

        if (canPaint(boards, n, k, mid)) {
            answer = mid;
            high = mid - 1;   // try smaller time
        } else {
            low = mid + 1;    // need more time
        }
    }

    cout << answer;

    return 0;
}