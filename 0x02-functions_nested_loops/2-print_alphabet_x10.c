#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
char t = 'a';
int m = 10;

while (m >= 1)
{
while (t <= 'z')
{
_putchar(t);
++t;
}
--m;
_putchar(10);
t = 'a';
}
}
