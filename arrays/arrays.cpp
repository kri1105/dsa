// arrays 

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // declares an array of integers with 5 elements

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // prints each element of the array
    }
    cout << endl;

    return 0;
}