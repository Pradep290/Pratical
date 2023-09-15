  #include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int i = 1;
    int fact = 1;
    while (fact <= num) {
        if (fact == num) {
            printf("%d is a factorial number.\n", num);
            return 0;
        }
        i++;
        fact = factorial(i);
    }
    printf("%d is not a factorial number.\n", num);
    return 0;
}

