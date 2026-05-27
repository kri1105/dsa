// LEETCODE 238 - Product of Array Except Self

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    // METHOD 1 : BRUTE FORCE : TLE , TIME COMPLEXITY - O(n^2)
    // vector<int> ans(nums.size(), 1);
    // for (int i = 0; i < nums.size(); i++) {
    //     for (int j = 0; j < nums.size(); j++) {
    //         if (i != j) {
    //             ans[i] *= nums[j];
    //         }
    //     }
    // }
    // return ans;

    // METHOD 2 : OPTIMIZED METHOD - split the array into prefix and suffix,
    // get the product of each, and then save the product in the respective
    // place in the ans vector.

    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix *= nums[i + 1];  // calculate the i-th suffix product
        ans[i] *= suffix;
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Product except self: ";
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}