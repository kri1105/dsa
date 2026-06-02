// LEETCODE 80 - REMOVING THE DUPLICATED FROM THE SORTED ARRAY II

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int n : nums)
        if (i < 2 || n > nums[i - 2])
            nums[i++] = n;
    return i;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = removeDuplicates(nums);
    cout << "Number of elements after removing extra duplicates: " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}