#include <stdio.h>

void main() {
    int num, count = 0;
    double sum = 0.0;

    printf("Enter numbers (enter -1 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        // Check if the user wants to stop
        if (num == -1) {
            break;
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        double average = sum / count;
        printf("Sum of the numbers: %.20f\n", sum);
        printf("Average of the numbers: %.20f\n", average);
    } else {
        printf("No numbers were entered.\n");
}
}

