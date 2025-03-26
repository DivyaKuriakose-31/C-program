/* Author:Divya Kuriakose
   Date:26-03-2025
   Program to find the sum of the given array.*/

#include<stdio.h>
int sumArray(int[],int);
int main(){
    int limit;
    printf("Enter the size of the array:");
    scanf("%d",&limit);
    int array[limit];
    printf("\n Enter the elements in the array:");
    for(int i=0;i<limit;i++){
       scanf("%d",&array[i]);
    }
    int sum=sumArray(array,limit);
    printf("\n The sum of the array element is %d",sum);
    }
    int sumArray(int array[],int limit){
       int sum=0;
       for(int i=0;i<limit;i++){
       sum=sum +array[i];
       }
       return sum;
    }
