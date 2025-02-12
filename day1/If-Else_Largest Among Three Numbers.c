#include <stdio.h>

int find_largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int largest = find_largest(a, b, c);
    printf("The largest number is : %d\n", largest);
    return 0;
}    
    