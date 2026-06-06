// LEETCODE 567 - Permutation in String
#include <iostream>
#include <string>
using namespace std;

bool isfreqSame(int freq[], int windFreq[]) {
    for (int i = 0; i < 26; i++) {
        if (freq[i] != windFreq[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
    }

    int windSize = s1.length();

    for (int j = 0; j < s2.length(); j++) {
        int windIdx = 0;
        int idx = j;
        int windFreq[26] = {0};

        while (windIdx < windSize && idx < s2.length()) {
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }

        if (isfreqSame(freq, windFreq)) {
            return true;
        }
    }

    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << (checkInclusion(s1, s2) ? "true" : "false") << endl;

    return 0;
}
