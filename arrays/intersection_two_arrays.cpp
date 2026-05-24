#include <vector>
#include <iostream>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0;
    int j = 0;
    vector<int> ans;
    int n1 = nums1.size();
    int n2 = nums2.size();
    while( i < n1 && j < n2 ){
        if( nums1[i]==nums2[j]){
            ans.push_back(nums1[i]);
            while(i+1 < n1 && nums1[i+1]== nums1[i]) i++;
            while(j+1 < n2 && nums2[j+1]== nums2[j]) j++;
            i++;
            j++;
        }
        else if( nums1[i]> nums2[j]) j++;
        else i++;
    }
    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1}; // declare and initialize the first vector of integers
    vector<int> nums2 = {2, 2}; // declare and initialize the second vector of integers

    vector<int> result = intersection(nums1, nums2); // call the intersection function to find the common elements

    cout << "Intersection of the two arrays: ";
    for (int num : result) {
        cout << num << " "; // print each element of the intersection result
    }
    cout << endl;

    return 0;
}