//LEETCODE 3340 - Maximum Number of Non-Overlapping Substrings

#include <iostream>
#include <string>
using namespace std;

bool isBalanced(string num) {
    int eveSum = 0;
    int oddSum = 0;

    for (int i = 0; i < num.length(); i++) {
        if (i % 2 == 0) {
            eveSum += num[i] - '0';
        } else {
            oddSum += num[i] - '0';
        }
    }

    return eveSum == oddSum;
}

int main() {
    string num = "24123";

    cout << (isBalanced(num) ? "true" : "false") << endl;

    return 0;
}