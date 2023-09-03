/*
Q3) Write a C program to calculate following: -
a) Area of Rectangle and Square
b) Area of Triangle (by both the ways)
i. When Height and Base given
ii. When all three sides given (Heron’s formula)
*/
#include <stdio.h>
#include <math.h> 
int main()
{
    // area of rectangle
    int l;
    printf("Enter length of rectangle = ");
    scanf("%d", &l);
    int b;
    printf("Enter breadth of rectangle = ");
    scanf("%d", &b);
    printf("Area of rectangle = %d\n", l * b);

    // area of square
    int s;
    printf("Enter side of square = ");
    scanf("%d", &s);
    printf("Area of square = %d\n", s * s);

    // area of triangle when height and base are given
    int height;
    printf("Enter height of triangle = ");
    scanf("%d", &height);
    int base;
    printf("Enter base of triangle = ");
    scanf("%d", &base);
    float area = 0.5f * height * base;
    printf("Area of triangle = %f\n", area);

    // area of triangle - herons formula
    int s1;
    printf("Enter side 1 of triangle = ");
    scanf("%d", &s1);
    int s2;
    printf("Enter side 2 of triangle = ");
    scanf("%d", &s2);
    int s3;
    printf("Enter side 3 of triangle = ");
    scanf("%d", &s3);
    float sp = (s1 + s2 + s3) / 2;
    float areaHeron = sqrt(sp * (sp - s1) * (sp - s2) * (sp - s3));
    printf("Area of rectangle = %f\n", areaHeron);
    return 0;
}