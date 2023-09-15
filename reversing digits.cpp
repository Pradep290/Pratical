#include <stdio.h>

int reverseDigits(int num) {
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseDigits(num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}

