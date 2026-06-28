//LEETCODE 90: Subsets II

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getallsubsets(vector<int>& nums, vector<int>& ans, int i,
                   vector<vector<int>>& allsubsets) {
    if(i == nums.size()) {
        allsubsets.push_back(ans);
        return;
    }

    // Include
    ans.push_back(nums[i]);
    getallsubsets(nums, ans, i + 1, allsubsets);

    // Backtrack
    ans.pop_back();

    // Skip duplicates
    int index = i + 1;
    while(index < nums.size() && nums[index] == nums[index - 1])
        index++;

    // Exclude
    getallsubsets(nums, ans, index, allsubsets);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<int> ans;
    vector<vector<int>> allsubsets;

    getallsubsets(nums, ans, 0, allsubsets);

    return allsubsets;
}

int main() {
    vector<int> nums = {1, 2, 2};

    vector<vector<int>> result = subsetsWithDup(nums);

    for(auto subset : result) {
        cout << "[ ";
        for(int x : subset) {
            cout << x << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}