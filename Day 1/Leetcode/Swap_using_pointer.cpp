#include<iostream>
using namespace std;

void swapNumbers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout<<"Before swapping: "<<x<<" "<<y<<endl;

    swapNumbers(&x,&y);

    cout<<"After swapping: "<<x<<" "<<y<<endl;
}
