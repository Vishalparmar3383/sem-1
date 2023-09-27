#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    // Read the number as input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract the first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Extract the last digit
    lastDigit = num % 10;

    // Calculate and print the sum
    int sum = firstDigit + lastDigit;
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}

