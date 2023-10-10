#include "main.h"
/**
*print_sign-a number symbol is printed.
*@n: character verification.
*Return: return zero or one.
*/
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
