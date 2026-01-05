#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0, maxSum = INT_MIN;

        for (int val : nums) {
            curSum += val;
            maxSum = max(curSum, maxSum);

            if (curSum < 0) {
                curSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    vector<int> nums = {1, 5, 6, -3, -9, 7, -7};

    Solution sol;                       
    int result = sol.maxSubArray(nums); 

    cout << result << endl;
    return 0;
}
