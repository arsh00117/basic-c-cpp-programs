#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(const vector<int>& nums, int target) {
    int n = nums.size();
    vector <int> ans;

    int i = 0, j=n-1;
    while(i<j) {
        int pairSum = nums[i] + nums[j];
        if(pairSum>target) {
            j--;
        } else if(pairSum<target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main() {
    vector<int> nums = {11,7,2,15};
    int target = 13;

    vector<int> ans = pairSum(nums, target);

    if (!ans.empty()) {
        cout << nums[ans[0]] << ", " << nums[ans[1]] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
