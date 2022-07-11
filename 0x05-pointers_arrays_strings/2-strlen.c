#include "main.h"
/**
 * _strln -length of a string
 * 0s: a pointer to an int that will be changed
 * 
 * Return: void that means ans is correct
 */
int strlen(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}

