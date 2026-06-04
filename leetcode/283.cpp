// LEETCODE 283: MOVE ZEROES

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int left = 0;
    int n = nums.size();
    for(int right = 0; right < n; right++) {
        if(nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}