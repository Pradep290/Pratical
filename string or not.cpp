#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isValidString(const char *str, int maxLength) {
    if (str[0] == '\0') {
        return false;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            return false;
        }
    }

    
    if (strlen(str) > maxLength) {
        return false;
    }

    return true;
}

int main() {
    char input[100];  
    int maxLength = 20;  

    printf("Enter a string: ");
    scanf("%s", input);

    if (isValidString(input, maxLength)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }

    return 0;
}

