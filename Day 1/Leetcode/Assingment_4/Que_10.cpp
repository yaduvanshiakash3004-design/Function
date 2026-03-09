#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> result(n);

    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while(left <= right)
    {
        int leftSq = nums[left] * nums[left];
        int rightSq = nums[right] * nums[right];

        if(leftSq > rightSq)
        {
            result[pos] = leftSq;
            left++;
        }
        else
        {
            result[pos] = rightSq;
            right--;
        }

        pos--;
    }

    for(int i = 0; i < n; i++)
        cout << result[i] << " ";

    return 0;
}