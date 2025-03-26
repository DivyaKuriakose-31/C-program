/* Author:Divya Kuriakose
   Date:26-03-2025
   Program to find the power of the given number.*/

#include<stdio.h>
int power(int base,int exp){
if(exp==0){
  return 1;
}
else{
  return base*power(base,exp-1);
}
}
int main(){
   int base,exp;
   printf("\n Enter the base and exponent");
   scanf("%d%d",&base,&exp);
   printf("\n The power is %d",power(base,exp));
   return 0;
}
