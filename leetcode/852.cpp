//LEETCODE 852 - Peak Index in a Mountain Array
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

    int start = 1; // first element can't be peak
    int end = arr.size() - 2; // last element can't be peak
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if(arr[mid - 1] < arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {0, 2, 5, 3, 1};

    int peak = peakIndexInMountainArray(arr);

    cout << "Peak index: " << peak << endl;

    return 0;
}