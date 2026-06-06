// basics of 2-D arrys 
#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = { {1, 2, 3, 4}, 
                      {5, 6, 7, 8}, 
                      {9, 10, 11, 12} };

    // Accessing elements
    cout << "Element at (0, 0): " << arr[0][0] << endl; // Output: 1
    cout << "Element at (1, 2): " << arr[1][2] << endl; // Output: 7
    cout << "Element at (2, 3): " << arr[2][3] << endl; // Output: 12

    // Modifying an element
    arr[0][1] = 20;
    cout << "Modified element at (0, 1): " << arr[0][1] << endl; // Output: 20

    return 0;
}
