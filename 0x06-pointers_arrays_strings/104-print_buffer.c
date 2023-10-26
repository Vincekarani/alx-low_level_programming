#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b:the buffer
 * @size:the size
 * Return: void
 */
void print_buffer(char *b, int size)
{
int offset, k, i;

offset = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (offset < size)
{
k = size - offset <= 10 ? size - offset : 10;
printf("%08x: ", offset);
for (i = 0; i <= 10; i++)
{
if (i < k)
printf("%02x", *(b + offset + i));
else
printf(" ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < k; i++)
{
int c = *(b + offset + i);

if (c <= 31 || c >= 127)
{
c = '.';
}
printf("%c", c);

}
printf("\n");
offset += 10;
}
}
