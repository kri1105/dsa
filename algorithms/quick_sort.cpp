//  quick sort 

#include <iostream>
using namespace std;
#include <vector>

void quickSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot - 1); // left half sorting
        quickSort(arr, pivot + 1, end); // right half sorting
    } 
}

int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[end]; // start with the last element as pivot 
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = static_cast<int>(arr.size());

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

