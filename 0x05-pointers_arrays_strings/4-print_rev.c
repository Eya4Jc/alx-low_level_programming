#include "main.h"
/**
 * print_rev -this function prints reversing string
 * @s :this is input string
 */
void Print_rev(char *s);
int i;
for (i = 0; s[i] != '\0'; i++)
for (i = i - 1; s[i] != '\0'; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
