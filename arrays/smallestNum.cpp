// smallest number in array 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the size of the array:";
    cin>> n;

    int arr[n]; // create an array of size n 
    cout<< "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin>> arr[i]; // input the elements of the array
    }

    int small = arr[0];
    for( int i = 0; i<n;i++){
        if (arr[i]< small ){
            small = arr[i];
        }
    }

    cout<< "The smallest number in the array is: " << small << endl;
}

// METHOD 2 : USING THE MIN/MAX FUNCTION

#include <iostream>
using namespace std;

int main(){
    int arr[6] = {3, 5, 1, 8, 2, 4}; // declare and initialize an array of integers
    int small = INT_MAX; // initialize small to the maximum integer value
    for (int i = 0; i < 6; i++){
        small = min(small, arr[i]); // update small to the minimum of small and the current element
    }
    cout<< "The smallest number in the array is: " << small << endl; // print the smallest number in the array
}