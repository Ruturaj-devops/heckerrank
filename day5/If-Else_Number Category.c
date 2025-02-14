#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to classify the integer N
char classify(int N) {
    // Category A: Divisible by 2 and 3 but not by 5
    if (N % 2 == 0 && N % 3 == 0 && N % 5 != 0) {
        return 'A';
    }

    // Category B: Greater than 20 and product of two distinct primes in [2, 11]
    if (N > 20) {
        int primes[] = {2, 3, 5, 7, 11};
        int len = sizeof(primes) / sizeof(primes[0]);
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (primes[i] * primes[j] == N) {
                    return 'B';
                }
            }
        }
    }

    // Category C: Divisible by 3 or 7 but not both, and is a two-digit number
    if (N >= 10 && N <= 99) {
        bool divisibleBy3 = (N % 3 == 0);
        bool divisibleBy7 = (N % 7 == 0);
        if ((divisibleBy3 || divisibleBy7) && !(divisibleBy3 && divisibleBy7)) {
            return 'C';
        }
    }

    // Category D: Perfect square less than 200
    if (N > 0) {
        int sqrtN = sqrt(N);
        if (sqrtN * sqrtN == N && N < 200) {
            return 'D';
        }
    }

    // Category E: None of the above
    return 'E';
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%c\n", classify(N));
    return 0;
}