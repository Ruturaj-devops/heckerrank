#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Check if the number is a natural number
    if (N <= 0) {
        printf("The verdict for the number %d is: INVALID\n", N);
        return 0;
    }

    // Determine which conditions the number satisfies
    int condition1 = (N > 10 && N % 2 == 0);
    int condition2 = (N > 15 && N % 3 == 0);
    int condition3 = (N % 7 == 0);

    int conditions_met = condition1 + condition2 + condition3;

    // Determine the verdict
    if (conditions_met == 3) {
        printf("The verdict for the number %d is: SUPERNATURAL\n", N);
    } else if (conditions_met == 2) {
        printf("The verdict for the number %d is: MIRACULOUS\n", N);
    } else if (conditions_met == 1) {
        printf("The verdict for the number %d is: MAGICAL\n", N);
    } else {
        printf("The verdict for the number %d is: NORMAL\n", N);
    }

    return 0;
}