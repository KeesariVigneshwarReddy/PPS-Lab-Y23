/*
Q6) 6 Write c program for the following task using Ternary/Conditional operator 
a) Find maximum among given 2 numbers.
b) Find maximum among given 3 numbers
*/
#include <stdio.h>
int main()
{
    // maximum of 2 number
    int a1;
    printf("Enter a1 = ");
    scanf("%d", &a1);
    int b1;
    printf("Enter b1 = ");
    scanf("%d", &b1);
    int maxOfTwo = (a1 > b1) ? a1 : b1;
    printf("Max of two numbers = %d\n", maxOfTwo);

    // maximum of 3 number
    int a2;
    printf("Enter a2 = ");
    scanf("%d", &a2);
    int b2;
    printf("Enter b2 = ");
    scanf("%d", &b2);
    int c2;
    printf("Enter c2 = ");
    scanf("%d", &c2);
    int max1 = (a2 > b2) ? a2 : b2;
    int max2 = (b2 > c2) ? b2 : c2;
    int maxOfThree = (max1 > max2) ? max1 : max2;
    printf("Max of three numbers = %d\n", maxOfThree);
}