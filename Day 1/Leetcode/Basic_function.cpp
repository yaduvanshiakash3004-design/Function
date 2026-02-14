#include<iostream>
using namespace std;

// function 1
int sum(int a, int b)
{
    return a + b;
}

// function 2
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout<<sum(2,3)<<endl;
    cout<<sum(2,3,4)<<endl;
}
