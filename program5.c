#include<stdio.h>
int main(){
   int i,limit,maximumNo,minimumNo,positionMax=1,positionMin=1;
   printf("\n Enter the no. of elements:");
   scanf("%d",&limit);
   int number[limit];
   printf("\n Enter the %d elements:",limit);
   for(i=0;i<limit;i++){
     scanf("%d",&number[i]);
   }
     maximumNo=number[0];
     minimumNo=number[0];
     for(i=0;i<limit;i++){
        if(number[i]>maximumNo){
           maximumNo=number[i];
           positionMax=i+1;
      }
       if(number[i]<minimumNo){
           minimumNo=number[i];
           positionMin=i+1;
       }
      }
      printf("\n The maximum number in the given array is %d in the position of %d",maximumNo,positionMax);
      printf("\n The minimum number in the given array is %d in the position of %d",minimumNo,positionMin);
      return 0;
      }
   
