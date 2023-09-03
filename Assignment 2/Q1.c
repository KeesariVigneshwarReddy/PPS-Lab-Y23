/*
Q1) Read Student Information as Roll_number, Name (First letter only), marks_in_cgpa (till 2 
decimal point) and contact_number.
Display this information in the below sample format on the output console.
// Sample output
Student Information
Roll_number: 23UCS001
Name: XYZ 
Marks_in_cgpa: 7.91
Contact_number: 9675428654
*/
#include <stdio.h>
int main() 
{
   int Roll_number;
   printf("Enter Roll Number = ");
   scanf("%d", &Roll_number);
   char Name;
   printf("Enter Name = ");
   Name = getchar();
   float Marks_in_cgpa;
   printf("Enter Marks in CGPA = ");
   scanf("%f", &Marks_in_cgpa);
   long Contact_number;
   printf("Enter Contact Number = ");
   scanf("%ld", &Contact_number);
   printf("Student Information :\n");
   printf("Roll_number: %d\n", Roll_number);
   printf("Name: %c\n", Name);
   printf("Marks_in_cgpa: %f\n", Marks_in_cgpa);
   printf("Contact_number: %ld\n", Contact_number);
   return 0;
}
