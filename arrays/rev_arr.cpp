//Reverse an array 

#include <iostream>
using namespace std;

void revArray(int arr[], int n){
    // // method 1 : using swapping the elements
    // for (int i = 0; i < n/2; i++){
    //     swap(arr[i], arr[n-1-i]); // swaps the elements at index i and n-1-i
    // }

    // method 2 : using two pointer approch 
    int start = 0;
    int end = n-1;
    while ( start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    int arr[6] = {3, 5, 1, 8, 2, 4}; // declare and initialize an array of integers
    int n = sizeof(arr)/sizeof(arr[0]); // calculate the size of the array
    revArray(arr, n); // call the revArray function to reverse the array

    cout<< "Reversed array: ";
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " "; // print each element of the reversed array
    }
    cout<< endl;

    return 0;
}