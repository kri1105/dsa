// LEETCODE 50 - COMPUTING THE POWER OF AN NUMBER 
// here we use binomial exponentiation 
// we find the binary form of the exponent and then calculate the power 
// if there is a number n(decimal) -> log2(n)+1 binary digits.
// as the brute force methord asks you to loop x, n times - time complexity O(n)
// if we use the binary form of the exponent then the number of times the loop runs will be less, hence reducing the time complexity.


#include<iostream>
using namespace std;

int pow(int x, int n){
    int binaryForm = n;
    double ans = 1;
    if( n < 0){
        x = 1/x;
        binaryForm = -binaryForm;
    }
    while ( binaryForm > 0 ){
        if ( binaryForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
    }
    return ans;
}

int main(){
    int x = 2;
    int n = 5;
    cout << x << "^" << n << " = " << pow(x, n) << endl;
    return 0;
}