/* Author:Divya Kuriakose
Date:28-01-2025
Program to read the age of a candidate for voting
*/

#include<stdio.h>
int main(){
   int age;
   printf("\nEnter your age:");
   scanf("%d",&age);

   if(age>=18){
     printf("\nCongratulations! You are eligible for casting your vote");
   }
   else{
     printf("\nYou are not eligible for casting your vote");
    }
   return 0;
}
