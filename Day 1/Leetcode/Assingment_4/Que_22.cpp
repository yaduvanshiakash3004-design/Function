#include <iostream>
#include <vector>
using namespace std;

int trapWater(vector<int> &height, int n)
{
    int left = 0;
    int right = n - 1;
    
    int leftMax = 0;
    int rightMax = 0;
    
    int water = 0;
    
    while(left <= right)
    {
        if(height[left] <= height[right])
        {
            if(height[left] >= leftMax)
                leftMax = height[left];
            else
                water += leftMax - height[left];
            
            left++;
        }
        else
        {
            if(height[right] >= rightMax)
                rightMax = height[right];
            else
                water += rightMax - height[right];
            
            right--;
        }
    }
    
    return water;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        cout << trapWater(arr, n) << endl;
    }
}