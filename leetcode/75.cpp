// LEETCODE 75 - SORTING COLOURS (SORTING 0', 1's, 2's)
//DUTCH NATIONAL FLAG ALGORITHM - 
// [1--LOW-1, LOW--MID-1, MID-1--HIGH-1, HIGH - LAST ELEMENT] 
//in mid-1--high-1 : we first store the whole array, later we sort and place all the elements in the correct place so that this section because 0

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {

    // DUTCH NATIONAL FLAG ALGORITHM - maintain low med high, assign 0 to low-1, 1 to low -1 - mid-1 and 2 to high+1 - last element
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