#include<iostream>
using namespace std;

int sumOfNumbers(int n){
    if(n==1) return 1;
    return n+sumOfNumbers(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of numbers from 1 to "<<n<<" is "<<sumOfNumbers(n);
    return 0;
}