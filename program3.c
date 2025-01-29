#include<stdio.h>
int main(){
    int number,i,factorial=1;
    printf("\n Enter a number:");
    scanf("%d",&number);
    if(number>0){
      while(number>0){
          factorial=factorial*number;
          number=number-1;
          }
      printf("Factorial is %d",factorial);
      }else{
          printf("The given value is not a positive integer");
       }
       return 0;
       }
        
          
