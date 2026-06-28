//Linear Search 

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    int ans = -1 ;
    for( int i =0;i<n;i++){
        if (arr[i] == key){
            return i;
        }
        
    }
    return ans;
}

int main(){
    int arr[6] = {3, 5, 1, 8, 2, 4}; // declare and initialize an array of integers
    int key;
    cout<< "Enter the number to search: ";
    cin>> key; // input the number to search
    int index = linearSearch(arr, 6, key); // call the linearSearch function and store the result in index
    if (index != -1){
        cout<< "Element found at index: " << index << endl; // print the index of the found element
    } else {
        cout<< "Element not found in the array." << endl; // print a message if the element is not found
    }
}