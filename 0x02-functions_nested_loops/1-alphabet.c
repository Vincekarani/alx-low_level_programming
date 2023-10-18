#include "main.h"
/**
 * print_alphabet - lowercase, followed by a new line
 * Return: 0 (Success)
  */
void print_alphabet(void)
{
char q = 'a';

while (q <= 'z')
{
_putchar(q);
++q;
}
_putchar(10);
}
