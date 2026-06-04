#include <iostream>
#include <string>

int length(const std::string &s) {
    return static_cast<int>(s.size());
}

std::string concatenate(const std::string &a, const std::string &b) {
    return a + b;
}

int compare(const std::string &a, const std::string &b) {
    if (a == b) return 0;
    return (a < b) ? -1 : 1;
}

std::string substring(const std::string &s, int start, int count) {
    if (start < 0 || start >= static_cast<int>(s.size()) || count <= 0) {
        return "";
    }
    return s.substr(start, count);
}

int main() {
    std::string s1 = "Hello";
    std::string s2 = "World";

    std::cout << "String 1: " << s1 << '\n';
    std::cout << "String 2: " << s2 << '\n';
    std::cout << "Length of s1: " << length(s1) << '\n';
    std::cout << "Length of s2: " << length(s2) << '\n';

    std::string joined = concatenate(s1, ", " + s2);
    std::cout << "Concatenated: " << joined << '\n';

    int cmp = compare(s1, s2);
    std::cout << "Compare s1 and s2: " << cmp << '\n';

    std::string sub = substring(joined, 7, 5);
    std::cout << "Substring of concatenated string: " << sub << '\n';

    return 0;
}
