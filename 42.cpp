#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height)
{
    int n = height.size();
    if (n == 0) return 0;

    int left = 0;
    int right = n - 1;

    int leftmax = 0;
    int rightmax = 0;

    int answer = 0;

    while (left < right)
    {
        if (height[left] <= height[right])
        {
            if (height[left] >= leftmax)
            {
                leftmax = height[left];
            }
            else
            {
                answer += leftmax - height[left];
            }
            left++;
        }
        else
        {
            if (height[right] >= rightmax)
            {
                rightmax = height[right];
            }
            else
            {
                answer += rightmax - height[right];
            }
            right--;
        }
    }

    return answer;
}

int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << "Trapped Water = " << trap(height);

    return 0;
}