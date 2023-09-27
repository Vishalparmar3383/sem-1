#include <stdio.h>

void main() {
    int n, digit;

    printf("Enter a number: ");
    scanf("%d", &n);
    
      if (n < 0) {
        n = -n;
        printf("Digits of the number:\n-");
    } else {
        printf("Digits of the number: ");
    }

    do {
        digit = n % 10;
        printf("%d \n", digit);
        n /= 10;
    } while (n!= 0);

    printf("\n");

}

