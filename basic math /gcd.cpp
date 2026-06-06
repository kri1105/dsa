#include<iostream>
using namespace std;

int gcd(int a,int b){
    //method 1 : using euclid's algorithm
    // if(a==0) return b;
    // if(b==0) return a;
    // for(int i=min(a,b);i>=1;i--){
    //     if(a%i==0 && b%i==0) return i;
    // }

    //method 2 : using recursion 
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int a=12,b=15;
    cout<<gcd(a,b)<<endl;
    return 0;
}
