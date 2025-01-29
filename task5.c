/*Author:Divya Kuriakose
  Date:29-01-2025
  Program to find how much profit a seller made or loss he incurred
*/

#include<stdio.h>
int main(){
    int costPrice,sellingPrice,profit,loss;
    printf("\nEnter the cost price of the item:");
    scanf("%d",&costPrice);
    printf("\nEnter the selling price of the item:");
    scanf("%d",&sellingPrice);
    profit=costPrice-sellingPrice;
    loss=sellingPrice-costPrice;

    if(costPrice>sellingPrice){
        printf("\nThe seller made a profit");
    }else{
        printf("\nThe seller made an incurred loss");
    }

    if(profit>loss){
        printf("\nThe profit seller made is %d",profit);
    }else{
        printf("\nThe loss seller incurred is %d",loss);
    }
    return 0;
    }
