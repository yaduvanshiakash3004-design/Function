#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0;

        for (int num : nums) {
            totalSum += num;
        }

        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2,3,-1,8,4};
    

    int result = sol.findMiddleIndex(nums);

    cout << "Middle Index: " << result << endl;

    return 0;
}