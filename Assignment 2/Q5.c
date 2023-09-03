/*
Q5) Write a c program to swap two variables using: -
a) Using 3rd variable
b) Using addition and subtraction without 3rd variable
c) Using multiplication and division without 3rd variable
*/
#include<stdio.h>
int main()
{
    // using 3rd variable
    int a1;
    printf("Enter a1 = ");
    scanf("%d", &a1);
    int b1;
    printf("Enter b1 = ");
    scanf("%d", &b1);
    int c = b1;
    b1 = a1;
    a1 = c;
    printf("a1 = %d, b1 = %d\n", a1, b1);

    // without using 3rd variable - addition and subtraction
    int a2;
    printf("Enter a2 = ");
    scanf("%d", &a2);
    int b2;
    printf("Enter b2 = ");
    scanf("%d", &b2);
    a2 = a2 + b2;
    b2 = a2 - b2;
    a2 = a2 - b2;
    printf("a2 = %d, b2 = %d\n", a2, b2);

    // without using 3rd variable - multiplication and Division
    int a3;
    printf("Enter a3 = ");
    scanf("%d", &a3);
    int b3;
    printf("Enter b3 = ");
    scanf("%d", &b3);
    a3 = a3 * b3;
    b3 = a3 / b3;
    a3 = a3 / b3;
    printf("a3 = %d, b3 = %d\n", a3, b3);
}