#include<iostream>
using namespace std;

// Function definition
void swapNumbers(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before swapping:\n";
    cout << "x = " << x << " y = " << y << endl;

    // Function call
    swapNumbers(x, y);

    cout << "After swapping:\n";
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}
