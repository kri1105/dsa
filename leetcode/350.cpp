// LEETCODD 350 : INTERSECTION OF TWO ARRAYS II

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0, j = 0;
    vector<int> ans;
    int n1 = nums1.size();
    int n2 = nums2.size();
    while (i < n1 && j < n2) {
        if (nums1[i] == nums2[j]) {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j]) {
            j++;
        }
        else {
            i++;
        }
    }

    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = intersect(nums1, nums2);

    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}