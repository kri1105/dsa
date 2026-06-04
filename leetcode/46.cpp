#include <iostream>
using namespace std;

void solve(int idx, vector<int>& nums, vector<vector<int>>& ans) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);
        solve(idx + 1, nums, ans);
        swap(nums[idx], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    solve(0, nums, ans);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) {
        return 0;
    }

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = permute(nums);
    for (const auto& perm : result) {
        for (int i = 0; i < perm.size(); i++) {
            cout << perm[i];
            if (i + 1 < perm.size()) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}

