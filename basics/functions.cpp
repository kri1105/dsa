// implementation of factorial using funcitons ( resursive approach )
// #include<iostream>
// using namespace std;

// int factorial(int n) {
//     if (n == 0) return 1;
//     return n * factorial(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter a number to find its factorial: ";
//     cin>>n;

//     int fact = factorial(n) ;
//     cout<<"Factorial of "<<n<<" is "<<fact<<endl;

//     return 0;
// }


// sum of digits in a number 

// #include<iostream>
// using namespace std;

// int sumOfDigits(int n){
// // using for loop 
// //    int digitSum = 0;
// //    for( int i = 0 ; i<n; i++){
// //         int digit = n%10;
// //         n = n/10;
// //         digitSum += digit;
// //    }

//    int digitSum = 0;
//    while(n> 0){
//     int lastDigit = n%10;
//     n = n/10;
//     digitSum += lastDigit;
//    }
//    return digitSum;
// }

// int main(){
//     int n;
//     cout<<"Enter a number to find sum of its digits: ";
//     cin>>n;

//     int sum = sumOfDigits(n);
//     cout<<"Sum of digits in "<<n<<" is "<<sum<<endl;

//     return 0;
// }

// nCr = binomial coefficient using functions 

// # include<iostream>
// using namespace std;

// int factorial(int n) {
//     // if (n == 0) return 1;
//     // return n * factorial(n-1);

//     int fact = 1;
//     for( int i = 1 ; i<= n;i++){
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     return factorial(n) / (factorial(r) * factorial(n-r));
// }

// int main(){
//     int n, r;
//     cout<<"Enter n and r to find nCr: ";
//     cin>>n>>r;

//     int result = nCr(n, r);
//     cout<<"nCr of "<<n<<" and "<<r<<" is "<<result<<endl;

//     return 0;
// }

// FIBUNACCI SERIES

#include<iostream>
using namespace std;

int fibonacci(int n){
    // using recurrsion - 
    // if (n == 0) return 0;
    // if (n == 1) return 1;

    // return fibonacci(n-1) + fibonacci(n-2);
    // using for loop
    if ( n==0 ) return 0;
    if ( n== 1) return 1;
    if ( n> 1){
        int a = 0;
        int b = 1;
        int fib;
        for ( int i = 2; i<= n; i++){
            fib = a + b;
            a = b;
            b = fib;
        }
        return fib;
    }
}

int main(){
    int n;
    cout<<"Enter the number of terms in Fibonacci series: ";
    cin>>n;

    cout<<"Fibonacci series up to "<<n<<" terms: ";
    for (int i = 0; i < n; i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;

    return 0;
}

