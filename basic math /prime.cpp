// PRIME NUMBERS 

#include<iostream>
using namespace std;

const string isPrime(int n){
    if(n<=1) return "Neither prime nor composite";
    for(int i=2;i*i<=n;i++){
        if(n%i == 0) return "Not prime";
    }
    return "prime";
}

// OR - COUNTING PRIME NUMBERS ( USING SIEVE OF ERATOSTHENES )

int countPrimes(int n) {
    vector<bool> isprime(n, true);
    int count = 0;

    for (long long i = 2; i < n; i++) {
        if (isprime[i]) {
            count++;

            for (long long j = i * i; j < n; j += i) {
                isprime[j] = false;
            }
        }
    }

    return count;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<isPrime(n)<<endl;
    cout<<"Number of primes less than "<<n<<" is: "<<countPrimes(n)<<endl;
    return 0;
}