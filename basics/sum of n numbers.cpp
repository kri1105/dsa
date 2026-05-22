// SUM OF FIRST N NATURAL NUMBERS

#include<iostream>
using namespace std;

int main(){
    int n = 50;
    int sum = 0;
    int i = 1;
    while( i <= n) {
        sum += i;
        i++;
    }
    cout<<sum;
    return 0;
}

