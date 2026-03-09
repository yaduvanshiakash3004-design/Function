#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long power(long long a, long long b)
{
    long long result = 1;

    while(b)
    {
        if(b % 2)
            result = (result * a) % MOD;

        a = (a * a) % MOD;
        b /= 2;
    }

    return result;
}

int main()
{
    long long n;
    cin >> n;

    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        sum = (sum + x) % MOD;
    }

    long long q;
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        int x;
        cin >> x; // value not actually needed
    }

    long long ans = (sum * power(2, q)) % MOD;

    cout << ans;

    return 0;
}