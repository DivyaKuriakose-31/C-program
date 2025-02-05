#include<stdio.h>
int main(){
   int limit,i,item;
   printf("\n Enter the no. of elements:");
   scanf("%d",&limit);
   int number[limit];
   printf("\n Enter the %d elements:",limit);
   for(i=0;i<limit;i++){
      scanf("%d",&number[i]);
      }
   printf("\n Enter a elements to search:");
   scanf("%d",&item);
   for(i=0;i<limit;i++){
     if(number[i] == item){
        printf("\n The given element is found in position %d",i+1);
     }
      }
        return 0;
     }   
   
   
