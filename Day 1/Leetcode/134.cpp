#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalTank = 0;
        int currTank = 0;
        int start = 0;

        for (int i = 0; i < gas.size(); i++) {
            int diff = gas[i] - cost[i];

            totalTank += diff;
            currTank += diff;

            if (currTank < 0) {
                start = i + 1;
                currTank = 0;
            }
        }

        if (totalTank >= 0)
            return start;
        else
            return -1;
    }
};

int main() {
    Solution obj;

    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    cout << obj.canCompleteCircuit(gas, cost);

    return 0;
}