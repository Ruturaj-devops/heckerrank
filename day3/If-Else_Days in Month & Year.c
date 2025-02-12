#include <stdio.h>

int main() {
    int month, year;

    // Input the month and year
    scanf("%d", &month);
    scanf("%d", &year);

    // Validate both inputs independently
    int is_invalid = 0;
    if (month < 1 || month > 12) {
        printf("Invalid Month\n");
        is_invalid = 1;
    }
    if (year < 1) {
        printf("Invalid Year\n");
        is_invalid = 1;
    }

    // Stop further processing if inputs are invalid
    if (is_invalid) {
        return 0;
    }

    // Determine the number of days in the month
    int days;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Leap year calculation
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            // This case won't occur due to earlier validation
            return 0;
    }

    // Output the number of days
    printf("%d\n", days);
    return 0;
}
