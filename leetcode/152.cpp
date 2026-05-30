// LEETCODE 152 - MAXIMUM PRODUCT OF THE SUBARRAY

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProduct(vector<int>& nums) {

    int currMax = nums[0];
    int currMin = nums[0];
    int maxProd = nums[0];

    for(int i = 1; i < nums.size(); i++) {

        if(nums[i] < 0) {
            swap(currMin, currMax);
        }

        currMax = max(nums[i], nums[i] * currMax);

        currMin = min(nums[i], nums[i] * currMin);

        maxProd = max(currMax, maxProd);
    }

    return maxProd;
}

int main() {

    vector<int> nums = {2, 3, -2, 4};

    int ans = maxProduct(nums);

    cout << "Maximum Product Subarray: " << ans << endl;

    return 0;
}