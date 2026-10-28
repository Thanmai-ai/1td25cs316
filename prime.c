#include <stdio.h>

int main(void) {
    int number;
    int isPrime = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= number / i; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is prime.\n", number);
    } else {
        printf("%d is not prime.\n", number);
    }

    return 0;
}
