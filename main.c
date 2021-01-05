#include<stdio.h>
#include<string.h>
#include"header.h"


int main()
{
 char str[100];
  int k;
 int x;

 printf("Enter The String: \n");


 scanf("%s",str);//taking input from user 


 printf("\nGiven input string is:\n %s\n\n",str);//printing output

 k=strlen(str);

 // printf("%d",k);

 CharCount(str,k);//function call for counting character digits

 //getDetails(str,k);
 x=getDetails(str);
 customerMessages(x);//msg to the customer 

 return 0;

}