/*
Autor:Divya Kuriakose
Date:17-03-2025
program to find the product of the given numbers
*/
#include<stdio.h>
void multiply(int,int);
int main(){
    int num1,num2;
    printf("\n Enter the first number:");
    scanf("%d",&num1);
    printf("\n Enter the second number:");
    scanf("%d",&num2);
    multiply(num1,num2);
    return 0;
  }
  
  void multiply(int num1,int num2){
    int product=num1*num2;
    printf("\n The product of the given numbers %d and %d is %d",num1,num2,product);
  }
  
