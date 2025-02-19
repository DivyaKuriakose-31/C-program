/*Author:Divya kuriakose
  Date:19-02-2025
  program to compare two strings 

*/
#include<stdio.h>
#include<string.h>
int main(){

      char str1[20],str2[20];
      printf("\n Enter the first string:");
      fgets(str1,sizeof(str1),stdin);
      printf("\n Enter the second string:");
      fgets(str2,sizeof(str2),stdin);
      
      int result=strcmp(str1,str2);
      if(result==0){
         printf("The strings are equal\n");
      }else{
         printf("\n The strings are not equal");
      }
      return 0;
      }
      
