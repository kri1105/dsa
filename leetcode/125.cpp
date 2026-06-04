// LEETCODE 125 - VALID PALINDROME

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isAlphaNum(char ch) {
    return (ch >= '0' && ch <= '9') ||
           (tolower(ch) >= 'a' && tolower(ch) <= 'z');
}

bool isPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        if (!isAlphaNum(s[start])) {
            start++;
            continue;
        }

        if (!isAlphaNum(s[end])) {
            end--;
            continue;
        }

        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    cout << (isPalindrome(s) ? "true" : "false") << endl;

    return 0;
}