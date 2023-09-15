#include <stdio.h>

int main() {
    int n, i;
    long long int fib1 = 0, fib2 = 1, nextTerm, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%lld, ", fib1);
        sum += fib1;
        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;
    }

    printf("\nSum of Fibonacci Series: %lld\n", sum);

    return 0;
}

