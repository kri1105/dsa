// CHECK THE PRIME NUMBER 

#include<iostream>
using namespace std;

int main(){
    int n = 29;
    bool isPrime = true;

    for (int i = 2; i*i < n; i++){ // we can also write i <= sqrt(n) , we do this to avoid the time complexity of sqrt function and also to avoid the overflow of i*i when n is very large
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<n<<" is a prime number.";
    } else {
        cout<<n<<" is not a prime number.";
    }

    return 0;
}
