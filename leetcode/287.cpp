#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    //method 1 : using vectors 
    int n = nums.size();
    vector<int> count(n + 1, 0);

    for(int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;

        if(count[nums[i]] > 1)
            return nums[i];
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    cout << findDuplicate(nums) << endl;

    return 0;
}