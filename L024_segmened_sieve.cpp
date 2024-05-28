#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void simpleSieve(int limit, vector<int>& primes) {
    vector<bool> isPrime(limit + 1, true);
    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }
    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }	
}

void segmentedSieve(int L, int R) {
    int limit = sqrt(R);
    vector<int> primes;
    simpleSieve(limit, primes);

    // Initialize all numbers in range [L, R] as prime
    vector<bool> isPrime(R - L + 1, true);

    for (int prime : primes) {
        // Find the minimum number in the range [L, R] that is a multiple of prime
        int start = max(prime * prime, (L + prime - 1) / prime * prime);

        // Mark multiples of prime in the range [L, R]
        for (int j = start; j <= R; j += prime) {
            isPrime[j - L] = false;
        }
    }

    // Print all prime numbers in range [L, R]
    for (int i = 0; i <= R - L; ++i) {
        if (isPrime[i] && (i + L) >= 2) {
            cout << (i + L) << " ";
        }
    }
    cout << endl;
}

int main() {
    int L = 10, R = 50;
    cout << "Primes in range [" << L << ", " << R << "] are: ";
    segmentedSieve(L, R);
    return 0;
}
