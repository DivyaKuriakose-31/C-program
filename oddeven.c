/*
Autor:Divya Kuriakose
Date:17-03-2025
program to find the product of the given numbers
*/

#include <stdio.h>
int isEven(int);
int main(){
   int num,check;
   printf("Enter a number");
   scanf("%d",&num);
   check=isEven(num);
   if(check==1){
     printf("\n %d is an even number",num);
   }else{
     printf("\n %d is an odd number",num);
   }
   return 0;
  }
  int isEven(int num){
   if(num%2==0){
     return 1;
   }else{
      return 0;
   }
}
