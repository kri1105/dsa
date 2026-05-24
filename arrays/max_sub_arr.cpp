// Maximum Sub Array 
// METHOD 1 : BRUTE FORCE APPROCH USING NESTED LOOPS AND CALCULATING THE SUM OF EACH SUBARRAY
// #include <iostream>
// using namespace std;

// void subArray( int arr[], int n){
//     /*
//     This function prints all the subarrays of the given array. 
//     It uses three nested loops to generate all possible subarrays.
//     The outer loop iterates through the starting index of the subarray, 
//     the middle loop iterates through the ending index of the subarray, 
//     and the innermost loop prints the elements of the current subarray 
//     defined by the starting and ending indices.
//     */
    
//     for( int i = 0; i< n;i++){
//         for( int j = i; j<n;j++){
//             for( int k = i; k<=j;k++){
//                 cout<< arr[k]; // print the elements of the subarray from index i to j
//             }
//             cout<< " ";
//         }
//         cout<< endl;
//     }
// }


// int main(){
//     int arr[7] = {3,-4,5,4,-1,7,-8}; // initialize an array 
//     int n = 7;
//     subArray(arr, n); // call the subArray function to print all subarrays of the array
//     int sum = INT_MIN;
//     for( int i = 0;i<n;i++){
//         int currSum = 0;
//         for( int j = i; j<n;j++){
//             currSum += arr[j];
//             sum = max(sum, currSum);   
//         }
//     }

//     cout<< "The maximum sum of a subarray is: " << sum << endl; // print the maximum sum of a subarray

//     return 0;
// }

// METHOD 2 : KADANE'S ALGORITHM

#include <iostream>
using namespace std;

int main(){
    int arr[7] = {3,-4,5,4,-1,7,-8}; // initialize an array
    int n = 7;
    int maxSum = INT_MIN;
    int currSum = 0;
    for( int i =0;i<n;i++){
        currSum+= arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0 ){ 
            currSum = 0;
        }
    }
    cout << "The maximum sum of a subarray is: " << maxSum << endl;
    return 0;
}