//Decimal to binary conversion
#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0;
    int pow = 1;

    while( n > 0){
        int rem = n % 2;
        n /= 2; // decimal number - gets quotient   
        ans += rem * pow; // converts the reminder into binary and saves it wrt the place value 
        pow *= 10;// increase the place value by 10 
    }

    return ans;
}



int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int binary = decimalToBinary(n);
    cout << "Binary representation: " << binary << endl;

    return 0;
}