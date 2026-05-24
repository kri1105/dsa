// Binary to deicimal conversion
#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int pow = 0;

    while (n>0){
        int lastDigit = n%10; // gets the last digit of th binary number
        ans += lastDigit * (1 << pow); // converts the last digit into decimal and adds it to the answer
        n /= 10; // remove the last digit from the binary number 
        pow++;// increases the power by 1 for the next place value
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    int decimal = binaryToDecimal(n);
    cout << "Decimal representation: " << decimal << endl;

    return 0;
}