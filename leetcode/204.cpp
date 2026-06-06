// LEETCODE 204 - COUNT PRIMES 

#include <iostream>
#include <vector>
using namespace std;

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

int main() {
    int n = 10;

    cout << countPrimes(n) << endl;

    return 0;
}