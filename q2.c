//Print Your Details
// Take your name and age as input and print them.

#include <stdio.h>

int main() {

    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("The name is: %s\n", name);
    printf("The age is: %d\n", age);

    return 0;
}