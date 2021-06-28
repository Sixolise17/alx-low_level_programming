#include "holberton.h"

/*
 * swap_int - swaps the value of two integers
 * @a: pointer of int
 * @b: pointer of int
 * Return: void
 */

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a; 
*a = *b;
*b = tmp;

}
