// swap the numbers


#include <stdio.h>

int main() {

    int a, b, temp;

   printf("enter a :");
   scanf("%d", &a);

   printf("enter b:");
   scanf("%d",&b);


    // Swapping
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}