#include<iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int x = 10, y = 20;

    cout<<"Before swapping: "<<x<<" "<<y<<endl;

    swapNumbers(x,y);

    cout<<"After swapping: "<<x<<" "<<y<<endl;
}
