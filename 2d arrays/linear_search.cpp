// linear search in 2d array

#include <iostream>
#include <utility> // for std::pair₹₹
using namespace std;

bool linearSearch(int arr[3][4], int target) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == target) {
                return true; // Target found
            }
        }
    }
    return false; // Target not found
}

//return the pair of the target element in the 2d array - using stl pair 
pair<int, int> findElement(int arr[3][4], int target) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == target) {
                return make_pair(i, j); // Return the pair of indices
            }
        }
    }
    return make_pair(-1, -1); // Return (-1, -1) if target not found
}

int main() {
    int arr[3][4] = { {1, 2, 3, 4}, 
                      {5, 6, 7, 8}, 
                      {9, 10, 11, 12} };

    int target = 7;
    if (linearSearch(arr, target)) {
        cout << "Element " << target << " found in the array." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    
    return 0;
}