#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getDetails(char str[100])
{

    char *array[20];
    int i = 0;
    char *p = strtok (str, "_");

    while (p != NULL)
    {
        array[i++] = p;
        p = strtok (NULL, "_");
    }




    for (i = 0; i < 4; ++i)//loop for spliting array
     {
        char *p1 = strtok (array[i], ":");
        p1 = strtok (NULL, ":");
        array[i] = p1;
     }

     printf("Details:\n");//printing splited array
     printf("Name is %s \n",array[0]);
     printf("Phone is %s \n",array[1]);
     printf("City is %s \n",array[2]);
     printf("Amount is %s \n",array[3]);

     int x = atoi(array[3]);

return x;

}