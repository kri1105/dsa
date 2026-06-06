// maximum row sum in 2d array 
#include <iostream>
using namespace std;

int maxRowSum(int arr[3][4], int row, int col){
    int rowsum = INT_MIN;
    for(int i=0;i<row;i++){
        int currentRowSum = 0;
        for(int j=0;j<col;j++){
            currentRowSum += arr[i][j];
        }
        rowsum = max(rowsum, currentRowSum);
    }
    return rowsum;
}

int main() {
    int arr[3][4] = { {1, 2, 3, 4}, 
                      {5, 6, 7, 8}, 
                      {9, 10, 11, 12} };

    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(int);

    cout << "Maximum row sum: " << maxRowSum(arr, row, col) << endl;

    return 0;
}