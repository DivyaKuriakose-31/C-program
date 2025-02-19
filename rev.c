/* Author:Divya kuriakose
   Date:19-02-2024
   Program to reverse a string without using built in functions

*/

#include<stdio.h>
int main(){
     char str1[30],temp;
     int length,i;
     
     printf("\n Enter the string:");
     fgets(str1,sizeof(str1),stdin);
     
     for(length=0;str1[length]!='\0';length++);
       i=length-1;
     for(int j=0;j<=length/2;j++){
       temp=str1[i];
       str1[i]=str1[j];
       str1[j]=temp;
       i--;
     }
     printf("\n The reverse string:");
     puts(str1);
     return 0;
     }
     
      
