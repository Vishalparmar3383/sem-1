#include <stdio.h>

int main() {
    int num, firstdigit, lastdigit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    firstdigit=num;
    while (firstdigit>= 10) {
        firstdigit /= 10;
    }

    lastdigit = num % 10;

    int sum = firstdigit + lastdigit;
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}

