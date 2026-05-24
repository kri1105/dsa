// Largest number in array 
// METHOD 1 : USING LOOPS AND COMPARING EACH ELEMENT WITH THE FIRST ELEMENT OF THE ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<< "Enter the size of the array:";
//     cin>> n;

//     int arr[n]; // create an array of size n 
//     cout<< "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++){
//         cin>> arr[i]; // input the elements of the array
//     }

//     int large = arr[0];
//     for( int i = 0; i<n;i++){
//         if (arr[i]> large ){
//             large = arr[i];
//         }
//     }

//     cout<< "The largest number in the array is: " << large << endl;
// }

// METHOD 2 : USING THE MIN/MAX FUNCTION

#include <iostream>
using namespace std;

int main(){
    int arr[6] = {3, 5, 1, 8, 2, 4}; // declare and initialize an array of integers
    int large = INT_MIN; // initialize large to the maximum integer value
    for (int i = 0; i < 6; i++){
        large = max(large, arr[i]); // update large to the maximum of large and the current element
    }
    cout<< "The largest number in the array is: " << large << endl; // print the largest number in the array
}