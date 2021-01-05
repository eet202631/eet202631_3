#include<stdio.h>
#include"header.h"

void CharCount(char str[100], int n)
{
   char ch;
   int  non=0, noc=0, nosc=0;

  for(int i=0; i<n; i++)
  {
     ch=str[i];

     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        noc++;

     else if(ch >= '0' && ch <= '9')
        non++;

      else
      nosc++;

  }
printf("\n alphabat: %d ",noc);
printf("\n number: %d ",non);
printf("\n special char: %d \n",nosc);

}