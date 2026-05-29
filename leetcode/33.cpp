//LEEETCODE - 33 : Search in Rotated Sorted Array

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    // METHOD : MODIFIED BINARY SEARCH
    int start = 0;
    int end = nums.size() - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(nums[mid] == target) {
            return mid;
        }

        // Left half sorted
        if(nums[start] <= nums[mid]) {
            if(nums[start] <= target && target < nums[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        // Right half sorted
        else {
            if(target >= nums[mid] && target <= nums[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {

    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    int result = search(nums, target);

    cout << "Target found at index: " << result << endl;

    return 0;
}