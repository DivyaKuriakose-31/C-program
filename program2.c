#include<stdio.h>
int main(){
   int num1,num2,choice,sum,difference,product,quotient,remainder;
   printf("\n Enter two integer numbers:");
   scanf("%d%d",&num1,&num2);
   printf("\n Enter any chooses(+,-,*,/,%%)");
   scanf(" %lc",&choice);
   
   switch(choice){
      case '+':sum=num1+num2;
               printf("Sum of the given two numbers %d,%d is %d",num1,num2,sum);
               break;
      case '-':difference=num1-num2;
               printf("Difference of the given two number %d,%d is %d",num1,num2,difference);
               break;
      case '*':product=num1*num2;
               printf("Product of the given two numbers %d,%d is %d",num1,num2,product);
               break;
      case '/':quotient=num1/num2;
               printf("Quotient of the given two numbers %d,%d is %d",num1,num2,quotient);
               break;
      case '%':remainder=num1%num2;
               printf("Remainder of the given two numbers %d,%d is %d",num1,num2,remainder);
               break;
      default:printf("Invalid case");
              break;
      }
      return 0;
      }
