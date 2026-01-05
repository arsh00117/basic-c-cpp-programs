#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(const vector<int>& nums, int target) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(nums, target);

    if (!ans.empty()) {
        cout << nums[ans[0]] << ", " << nums[ans[1]] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
