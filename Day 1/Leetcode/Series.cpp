#include <iostream>
using namespace std;

int main()
{
    int N1, N2;
    cin >> N1 >> N2;

    int count = 0;   // how many printed
    int n = 1;

    while(count < N1)
    {
        int value = 3 * n + 2;

        if(value % N2 != 0)   // not multiple
        {
            cout << value << endl;
            count++;
        }

        n++;
    }

    return 0;
}
