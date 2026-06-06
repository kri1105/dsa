//LEETCODE 443: String Compression


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) {
    int idx = 0;
    int n = chars.size();

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch) {
            count++;
            i++;
        }

        if (count == 1) {
            chars[idx++] = ch;
        } else {
            chars[idx++] = ch;

            string str = to_string(count);

            for (char digit : str) {
                chars[idx++] = digit;
            }
        }

        i--;
    }

    chars.resize(idx);
    return idx;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int len = compress(chars);

    cout << "Length: " << len << endl;
    cout << "Compressed Array: ";

    for (char ch : chars) {
        cout << ch << " ";
    }

    cout << endl;

    return 0;
}