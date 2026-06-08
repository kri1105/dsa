#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> ans;

    int srow = 0;
    int erow = m - 1;
    int scol = 0;
    int ecol = n - 1;

    while (srow <= erow && scol <= ecol) {

        // Top Row
        for (int i = scol; i <= ecol; i++) {
            ans.push_back(matrix[srow][i]);
        }

        // Right Column
        for (int i = srow + 1; i <= erow; i++) {
            ans.push_back(matrix[i][ecol]);
        }

        // Bottom Row
        for (int i = ecol - 1; i >= scol; i--) {
            if (srow == erow) break;
            ans.push_back(matrix[erow][i]);
        }

        // Left Column
        for (int i = erow - 1; i >= srow + 1; i--) {
            if (scol == ecol) break;
            ans.push_back(matrix[i][scol]);
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> ans = spiralOrder(matrix);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}