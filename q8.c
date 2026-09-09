//Find the Largest of Three Numbers

#include <stdio.h>

int main() {

    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    int c;
    printf("Enter c: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("a is larger");
    }
    else if (b > a && b > c) {
        printf("b is larger");
    }
    else {
        printf("c is larger");
    }

    return 0;
}