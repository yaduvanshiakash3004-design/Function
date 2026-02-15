#include <iostream>
using namespace std;

// function to find digit sum
int digitSum(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int original = n;

    // Step 1: sum of digits of number
    int sumNumber = digitSum(n);

    // Step 2: sum of digits of prime factors
    int sumFactors = 0;

    for(int i = 2; i*i <= n; i++)
    {
        while(n % i == 0)
        {
            sumFactors += digitSum(i);
            n /= i;
        }
    }

    // remaining prime factor
    if(n > 1)
        sumFactors += digitSum(n);

    // Step 3: compare
    if(sumNumber == sumFactors)
        cout << 1;
    else
        cout << 0;

    return 0;
}
