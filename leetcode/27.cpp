#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int index = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            nums[index] = nums[i];
            index++;
        }
    }

    return index;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int k = removeElement(nums, val);
    cout << "Number of elements after removal: " << k << endl;
    cout << "Modified array: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}