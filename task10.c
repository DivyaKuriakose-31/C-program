/*Author:Divya Kuriakose
  Date:02-02-2025
  program to check whether the given triangle is valid or not
  */

#include<stdio.h>
int main(){
   int side1,side2,side3;
   printf("\nEnter the sides of the triangle");
   scanf("%d%d%d",&side1,&side2,&side3);

   if(side1+side2+side3 == 180){
    printf("\nThe given triangle is valid");
   }else{
    printf("\nThe given triangle is not  valid");
   }
   return 0;
}
