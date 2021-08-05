#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */


unsigned int binary_to_uint(const char *b)
{
unsigned int v = 1;
unsigned int i = 0;
int c;
unsigned int len;

len = strlen(b);

for (c = len - 1; c >= 0; c--)
{
if (b[c] != '0' && b[c] != '1')
return (0);
if (b[c] == '1')
{
i += v;
}
v *= 2;
}
return (i);
}
