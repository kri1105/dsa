//LEETCODE 1572 - SUM OF DIAGONALS IN A SQUARE MATRIX

#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int sum = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
                sum += mat[i][j];
            else if(j == n - 1 - i)
                sum += mat[i][j];
        }
    }

    return sum;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << diagonalSum(mat) << endl;

    return 0;
}