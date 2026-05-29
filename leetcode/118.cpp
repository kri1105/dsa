//LEETCODE 118 - PASCAL'S TRIANGLE 

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<int> prevRow;
    vector<vector<int>> ans;
    for(int i = 0; i < numRows; i++) {
        vector<int> currRow(i + 1, 1);
        for(int j = 1; j < i; j++) {
            currRow[j] = prevRow[j - 1] + prevRow[j];
        }
        ans.push_back(currRow);
        prevRow = currRow;
    }
    return ans;
}

int main() {
    int numRows = 5;
    vector<vector<int>> result = generate(numRows);
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}