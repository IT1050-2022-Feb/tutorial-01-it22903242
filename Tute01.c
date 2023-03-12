/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int M1,M2;
   float avg;
   
   printf("Enter the marks of two subjects:");
   scanf("%d%d",&M1,&M2);
   
   
   avg=(M1+M2)/2.0;
   
   printf("Average of %d and %d is :%.2f",M1,M2,avg);
   
   
  
  return 0;
}
  
  

