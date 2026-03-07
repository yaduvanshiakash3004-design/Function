#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {

        int n;
        cin >> n;

        int arr[10005];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int M;
        cin >> M;

        sort(arr, arr + n);

        int left = 0, right = n - 1;
        int ans1 = 0, ans2 = 0;
        int minDiff = 1e9;

        while (left < right) {

            int sum = arr[left] + arr[right];

            if (sum == M) {

                if (arr[right] - arr[left] < minDiff) {
                    minDiff = arr[right] - arr[left];
                    ans1 = arr[left];
                    ans2 = arr[right];
                }

                left++;
                right--;
            }
            else if (sum < M) {
                left++;
            }
            else {
                right--;
            }
        }

        cout << "Deepak should buy roses whose prices are "
             << ans1 << " and " << ans2 << ".";

        cout << endl << endl;
    }

    return 0;
}