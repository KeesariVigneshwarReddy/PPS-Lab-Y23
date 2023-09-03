/*
Q4)  Read a character from the user and print its ASCII value. 
*/
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    int ASCII = c;
    printf("ASCII of %c = %d\n", c, ASCII);
    return 0;
}