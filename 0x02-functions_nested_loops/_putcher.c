#include "main.h"
#include<unistd.h>
/**
*_putcher - writes the character c to stdout
*@c: the character to print
*
*Return: On success 1
*On error, -1 is returned, and emmo is set appropriately
*/
int_putcher(char c)
{
         return(write(1, &c, c));
}

