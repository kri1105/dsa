//two's complement 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int twosComplement = (~n) + 1; // calculates the two's complement by inverting the bits and adding 1
    cout << "Two's complement: " << twosComplement << endl;

    return 0;
}