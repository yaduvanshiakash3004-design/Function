#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;

    while(T--) {

        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;

        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < m; i++)
            cin >> b[i];

        int rickshawCost = 0;

        for(int i = 0; i < n; i++)
            rickshawCost += min(a[i] * c1, c2);

        rickshawCost = min(rickshawCost, c3);

        int cabCost = 0;

        for(int i = 0; i < m; i++)
            cabCost += min(b[i] * c1, c2);

        cabCost = min(cabCost, c3);

        cout << min(rickshawCost + cabCost, c4) << endl;
    }

    return 0;
}