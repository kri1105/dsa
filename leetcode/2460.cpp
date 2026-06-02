// LEETCODE 2460 - APPLYING OPERATIONS TO AN ARRAY

#include <iostream>
#include <vector>
using namespace std;

vector<int> applyOperations(vector<int>& nums) {
    int n = nums.size();
    // Apply operations
    for(int i = 0; i < n - 1; i++) {
        if(nums[i] == nums[i + 1]) {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }

    // Move zeros to the end
    int left = 0;
    for(int right = 0; right < n; right++) {
        if(nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
    return nums;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1, 0};
    vector<int> result = applyOperations(nums);
    cout << "Result: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}