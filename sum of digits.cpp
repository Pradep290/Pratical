#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumOfDigits(num);
    printf("Sum of digits: %d\n", sum);

    return 0;
}

