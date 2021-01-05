#include<stdio.h>
#include"header.h"

void customerMessages(int amt)// giving the customer statement
{
   if(amt>=250 && amt<750)
      printf("\n Recharge is succesfull and you can avail benefits of silver group\n");

   else if(amt>=750 && amt<1500)
      printf("\n Recharge is succesfull and you can avail benefits of gold group\n");

   else if(amt>=1500 && amt<=2500)
      printf("\n Recharge is succesfull and you can avail benefits of platinum group\n");
   else 
   printf("recharge is succesfull and no extra benefits \n");
}