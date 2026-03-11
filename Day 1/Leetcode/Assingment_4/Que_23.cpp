#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int candidate = 0;
    int count = 0;

    for(int num : nums)
    {
        if(count == 0)
            candidate = num;

        if(num == candidate)
            count++;
        else
            count--;
    }

    return candidate;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << majorityElement(arr);

    return 0;
}