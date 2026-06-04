// LEETCODE 209: MINIMUM SIZE SUBARRAY SUM

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0;
    int sum = 0;
    int ans = INT_MAX;
    int n = nums.size();

    for (int right = 0; right < n; right++) {
        sum += nums[right];

        while (sum >= target) {
            ans = min(ans, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }

    return ans == INT_MAX ? 0 : ans;
}

int main() {
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;

    cout << minSubArrayLen(target, nums) << endl;

    return 0;
}