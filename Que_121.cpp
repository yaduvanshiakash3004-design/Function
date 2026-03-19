#include <bits/stdc++.h>
using namespace std;

bool canCook(int p, vector<int>& ranks, int mid) {
    int total = 0;

    for (int r : ranks) {
        int time = 0;
        int j = 1;

        // count paranthas cooked by this cook
        while (true) {
            time += j * r;
            if (time > mid) break;
            total++;
            j++;
        }

        if (total >= p) return true;
    }

    return false;
}

int minTime(int p, vector<int>& ranks) {
    int low = 0;
    int high = 1e7; // safe upper bound
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canCook(p, ranks, mid)) {
            ans = mid;
            high = mid - 1; // try smaller time
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int p, L;
    cin >> p;
    cin >> L;

    vector<int> ranks(L);
    for (int i = 0; i < L; i++) {
        cin >> ranks[i];
    }

    cout << minTime(p, ranks);

    return 0;
}