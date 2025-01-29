/*Author:Divya Kuriakose
  Date:29-01-2025
  Program to check whether the given number is odd or even
*/

#include<stdio.h>
int main(){
    int number;
    printf("\nEnter the number:");
    scanf("%d",&number);
    if(number %2==0){
        printf("\nThe given number %d is an even number",number);
    }else{
        printf("\nThe given number %d is an odd number",number);
    }
    return 0;
    }
