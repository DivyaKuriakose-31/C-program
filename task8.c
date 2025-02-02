/*Author:Divya Kuriakose
  Date:02-02-2025
  program to read temperature in centigrade
  */

#include<stdio.h>
int main(){
   float temperature;
   printf("\nEnter the temperature in centigrade:");
   scanf("%f,&temperature");
   if(temperature<0){
    printf("\nFreezing weather");
   }else if(temperature>=0 && temperature<10){
       printf("\nVery cold weather");
   }else if(temperature>=10 && temperature<20){
       printf("\nCold weather");
   }else if(temperature>=20 && temperature<30){
       printf("\nNormal in temperature");
   }else if(temperature>=30 && temperature<40){
       printf("\nIts hot");
   }else{
       printf("\nIts very hot");
   }
   return 0;
}
