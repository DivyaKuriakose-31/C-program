/* Author:Divya Kuriakose
Date:28-01-2025
Program to find the youngest among the three
*/

#include<stdio.h>
int main(){
   int ramAge,shyamAge,ajayAge;
   printf("\nEnter the age of Ram:");
   scanf("%d",&ramAge);

   printf("\nEnter the age of Shyam:");
   scanf("%d",&shyamAge);

   printf("\nEnter the age of Ajay:");
   scanf("%d",&ajayAge);

   if (ramAge<shyamAge && ramAge<ajayAge){
      printf("\n Ram is the youngest one");

   }else if(shyamAge<ramAge && shyamAge<ajayAge){
      printf("\nShyam is the youngest one");

   }else{
    printf("\nAjay is the youngest one");
   }

   return 0;

   }
