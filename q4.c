//Find the Average
//Take three numbers and calculate their average.

#include<stdio.h>
int main(){

    int a;
    printf("enter a :");
    scanf("%d",&a);

    int b;
    printf("enter b :");
    scanf("%d",&b);

    int c;
    printf("enter c :");
    scanf("%d",&c);

    int d = (a+b+c)/3;
    printf("the average is %d",d);

    return 0;

}