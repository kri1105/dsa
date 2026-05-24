//Unique element in an array 

#include <iostream>
using namespace std;

void findUnique(int arr[], int n) {
    int unique = 0;// initialize unique to 0
    int count = 0; // initialize count to 0
    for ( int i=0; i<n;i++){ // loop through each element of the array
        count = 0; // reset count for each element
        for( int j=0; j<n;j++){ // loop through the array again to count the occurrence
            if( arr[i] == arr[j] ){ // if the current element matches the element at index j
                count++; // increment count for each match found
            }
        }
        if( count == 1 ){ // if count is 1, it means the element is unique
            cout << "The unique element in the array is: " << arr[i] << endl;
        }
    }
}

int main() {
    int arr[7] = {2, 3, 5, 4, 5, 3, 4}; // declare and initialize an array of integers
    int n = sizeof(arr) / sizeof(arr[0]); // calculate the size of the array
    findUnique(arr, n); // call the findUnique function to find and print the unique element

    return 0;
}