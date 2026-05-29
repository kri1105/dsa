//LEETCODE 540 - Single Element in a Sorted Array

#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {

    int s = 0;
    int e = nums.size() - 1;

    if(nums.size() == 1) {
        return nums[0];
    }

    while(s < e) {

        int mid = s + (e - s) / 2;

        // make mid even
        if(mid % 2 == 1) {
            mid--;
        }

        // pair is correct
        if(nums[mid] == nums[mid + 1]) {
            s = mid + 2;
        }

        // single element is on left side
        else {
            e = mid;
        }
    }

    return nums[s];
}

int main() {

    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    int ans = singleNonDuplicate(nums);

    cout << "Single element: " << ans << endl;

    return 0;
}