// LEETCODE 31: Next Permutation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void nextPermutation(vector<int>& nums) {

//     int pivot = -1;
//     int n = nums.size();

//     // Step 1: Find pivot
//     for(int i = n - 2; i >= 0; i--) {
//         if(nums[i] < nums[i + 1]) {
//             pivot = i;
//             break;
//         }
//     }

//     // Step 2: If no pivot found, reverse entire array
//     if(pivot == -1) {
//         reverse(nums.begin(), nums.end());
//         return;
//     }

//     // Step 3: Find next greater element from right
//     for(int i = n - 1; i > pivot; i--) {
//         if(nums[i] > nums[pivot]) {
//             swap(nums[i], nums[pivot]);
//             break;
//         }
//     }

//     // Step 4: Reverse suffix
//     int i = pivot + 1;
//     int j = n - 1;

//     while(i < j) {
//         swap(nums[i], nums[j]);
//         i++;
//         j--;
//     }
// }

// int main() {

//     vector<int> nums = {1, 2, 3};

//     nextPermutation(nums);

//     cout << "Next Permutation: ";

//     for(int i = 0; i < nums.size(); i++) {
//         cout << nums[i] << " ";
//     }

//     cout << endl;

//     return 0;
// }

// OR - use the STL built-in function 

void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(),nums.end());
}

int main() {

    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

    cout << "Next Permutation: ";

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
