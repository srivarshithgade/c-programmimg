//simple calculator

#include <stdio.h>

int main() {

    int a, b;
    char operation;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Choose an operation (+, -, *, /, %%): ");
    scanf(" %c", &operation);

    if (operation == '+') {
        printf("Result = %d", a + b);
    }

    else if (operation == '-') {
        printf("Result = %d", a - b);
    }

    else if (operation == '*') {
        printf("Result = %d", a * b);
    }

    else if (operation == '/') {
        printf("Result = %d", a / b);
    }

    else if (operation == '%') {
        printf("Result = %d", a % b);
    }

    else {
        printf("Invalid operation!");
    }

    return 0;
}
