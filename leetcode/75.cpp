// LEETCODE 75 - SORTING COLOURS (SORTING 0', 1's, 2's)

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {

    // DUTCH NATIONAL FLAG ALGORITHM - maintain low med high, assign 0 to low, 1 to mid and 2 to high and sort
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while(mid <= high) {

        if(nums[mid] == 0) { // if number = 0; assign it low 
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {

    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    cout << "Sorted array: ";

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}