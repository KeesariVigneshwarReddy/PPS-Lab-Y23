/*
Q7) Assume you are at the top of Burj Khalifa in Dubai. The height of Burj Khalifa is 25 m and 
you are looking towards point C which is located at road in diagonal direction. From the base 
point of Burj Khalifa, the distance of point C is 15 m. Write a C program that calculates the 
distance between you to point C (in diagonal direction).
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int height = 25, base = 15;
    float hypotenuse = sqrt(height * height + base * base);
    printf("Distance = %f\n", hypotenuse);
    return 0;
}