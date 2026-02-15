#include <iostream>
using namespace std;

int main()
{
    long long n1, n2;
    cin >> n1 >> n2;

    while(n2 != 0)
    {
        long long temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    cout << n1;

    return 0;
}
