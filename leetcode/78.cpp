//LEETCODE 78: Subsets


#include <iostream>
#include <vector>
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

    // Exclude
    getallsubsets(nums, ans, i + 1, allsubsets);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allsubsets;
    vector<int> ans;

    getallsubsets(nums, ans, 0, allsubsets);

    return allsubsets;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = subsets(nums);

    for(auto subset : result) {
        cout << "[ ";
        for(int x : subset) {
            cout << x << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}