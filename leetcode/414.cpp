// LEETCODE 414 - THIRD MAXIMUM NUMBER

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> distinct;
    distinct.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            distinct.push_back(nums[i]);
        }
    }
    int d = distinct.size();
    if (d >= 3)
        return distinct[d - 3];

    return distinct[d - 1];
}

int main() {
    vector<int> nums = {2, 2, 3, 1};

    cout << thirdMax(nums) << endl;

    return 0;
}