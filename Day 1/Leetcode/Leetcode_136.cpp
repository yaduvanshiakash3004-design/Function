#include <iostream>
#include <vector>
using namespace std;

// LeetCode 136 - Single Number

int singleNumber(vector<int>& nums) {

    int ans = 0;

    for(int x : nums)
        ans ^= x;

    return ans;
}

int main() {

    vector<int> nums = {4,1,2,1,2};

    cout << singleNumber(nums);

    return 0;
}