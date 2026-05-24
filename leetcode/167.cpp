// Two Sum question - find the indices of the two numbers in the array that add up to a specific target
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Using kaidan's algorithm - to be used when the array is sorted
    int n = nums.size();
    int start=0;
    int end=n-1;
    while(start<end){
        if(nums[start]+nums[end]==target){
            return {start+1,end+1};
        }
        else if(nums[start]+nums[end]>target){
            end--;
        }
        else{
            start++;
        }
    }
    return {-1,-1}; 
}


vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans; // return the indices of the two numbers that add up to the target
            }
        }
    }
    return ans; // return an empty vector if no such pair is found   
} 

int main() {
    vector<int> nums = {2, 7, 11, 15}; // declare and initialize a vector of integers
    int target = 9; // declare and initialize the target sum

    vector<int> result = twoSum(nums, target); // call the twoSum function to find the indices of the two numbers that add up to the target

    cout << "indicies that add up to target:" ;
    for ( int idx : result ){
        cout << idx << " ";
    }

    return 0;
}