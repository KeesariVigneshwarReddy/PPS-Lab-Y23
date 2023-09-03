/*
Q2) Read 3 variables (A, B and C) with the following datatypes as A as an Integer, B as Float 
and C as an Integer. Perform the following task and print the result.
a) A + B - C
b) A * B - C
c) A % C * B
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a = ");
    scanf("%d", &a);
    float b;
    printf("Enter b = ");
    scanf("%f", &b);
    int c;
    printf("Enter c = ");
    scanf("%d", &c);
    printf("%f\n", a + b - c);
    printf("%f\n", a * b - c);
    printf("%f\n", a % c * b);
    return 0;
}