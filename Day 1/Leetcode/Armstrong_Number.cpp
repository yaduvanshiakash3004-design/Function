#include <iostream>
using namespace std;

int main()
{
    int N1, N2;
    cin >> N1 >> N2;

    for(int i = N1; i <= N2; i++)
    {
        int num = i;
        int sum = 0;

        while(num > 0)
        {
            int digit = num % 10;
            sum += digit * digit * digit;   // cube
            num = num / 10;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}
