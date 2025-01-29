#include<stdio.h>
int main(){
   int year;
   printf("\n Enter a year:");
   scanf("%d",&year);
   if(year%4==0 && year%100!=0 || year%400==0){
      printf("\n It is a leap year");
   }else{
      printf("\n It is not a leap year");
   }
   return 0;
   }
