/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark_1,mark_2;
   float avg;
   printf("Enter mark 1 :");
   scanf("%d",&mark_1);
   printf("Enter mark 2 :");
   scanf("%d",&mark_2);
   
  avg=(mark_1+mark_2)/2.0 ;
   printf("Average is :");
   scanf("%f",&avg);
   
  return 0;
}

