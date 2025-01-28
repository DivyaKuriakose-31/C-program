/* Author:Divya Kuriakose
Date:28-01-2025
Program to read days in integer and display it as day name in the word
*/

#include<stdio.h>
int main(){

   int day;
   printf("\nEnter any day in integer number(1-7):");
   scanf("%d",&day);

   switch(day){
      case 0:printf("\nSunday");
             break;
      case 1:printf("\nMonday");
             break;
      case 2:printf("\nTuesday");
             break;
      case 3:printf("\nWednesday");
             break;
      case 4:printf("\nThursday");
             break;
      case 5:printf("\nFriday");
             break;
      case 6:printf("\nSaturday");
             break;
      default:printf("Invalid value");
             break;
      }

     return 0;
    }
