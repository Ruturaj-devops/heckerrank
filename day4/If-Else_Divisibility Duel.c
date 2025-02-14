#include <stdio.h>

int main() {
    long long X, Y, Z;
    scanf("%lld %lld %lld", &X, &Y, &Z);
    if (X % Y == 0 && X % Z == 0) {
        printf("X defeats all!\n");
    } else if (X % Y == 0) {
        printf("Y triumphs over X!\n");
    } else if (X % Z == 0) {
        printf("Z outsmarts X!\n");
    } else {
        printf("X remains undefeated!\n");
    }

    return 0;
}