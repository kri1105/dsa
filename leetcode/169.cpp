// majority element - leetcode 169 

// METHOD 1 : BRUTE FORCE APPROCH USING NESTED LOOPS AND CALCULATING THE FREQUENCY OF EACH ELEMENT
// TIME COMPLEXITY - O(n^2)
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // declare and initialize a vector of integers
//     int n = nums.size();
//     for ( int val : nums ){
//         int freq = 0;
//         for( int el : nums){
//             if ( el == val){
//                 freq++;
//             }
//             if (freq > n/2){
//                 return val;
//             }
//         }
//     }

//     return 0;
// }

// METHOD 2: COUNTING THE FREQUENCY AND CHECKING IF IT EXCEEDS N/2
// TIME COMPLEXITY - O(n log n )
// #include <vector>
// #include <algorithm>
// using namespace std;

// int majorityElement(vector<int>& nums){
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     int freq = 0;
//     int ans = nums[0];
//     for (int i = 1; i < nums.size(); i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }
//         else {
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > n/2){
//             return ans;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // test case
//     cout << "The majority element is: " << majorityElement(nums) << endl;
//     return 0;
// }


// METHOD 3 : MOORE'S VOTING ALGORITHM 

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int freq = 0;
    int ans = 0;
    for( int i =0 ; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "The majority element is: " << majorityElement(nums) << endl;
    return 0;
}