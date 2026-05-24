#include <iostream>
using namespace std;

int main(){
    int arr[6] = {3, 5, 1, 8, 2, 4}; // declare and initialize an array of integers
    int small = INT_MAX; // initialize small to the maximum integer value
    int large = INT_MIN; // initialize large to the minimum integer value
    int indexsmall = 0;
    int indexlarge = 0;
    for( int i = 0;i< 6;i++){
        if( arr[i]< small) {
            small = arr[i]; // update small to the minimum of small and the current element
            indexsmall = i;
        }
        if( arr[i]> large) {
            large = arr[i]; // update large to the maximum of large and the current element
            indexlarge = i;
        }
    }
    cout<< "Index of the smallest number is: " << indexsmall << endl;
    cout<< "Index of the largest number is: " << indexlarge << endl;
}