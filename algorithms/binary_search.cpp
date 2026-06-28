//BINARY SEARCH ALGORITHM
#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int start = 0;
    int end = static_cast<int>(arr.size()) - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1; // not found
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;

    int index = binarySearch(arr, target);

    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << "\n";
    } else {
        std::cout << "Element " << target << " not found\n";
    }

    return 0;
}
