#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated with a malloc call
 * @old_size: size of the allocated space for ptr in bytes
 * @new_size: new size of the new memory block in bytes
 *
 * Return: ptr to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, char *old_ptr, unsigned int v;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (v = 0; v < new_size; v++)
			ptr1[v] = old_ptr[v];
	}
	if (new_size > old_size)
	{
		for (v = 0; v < old_size; v++)
			ptr1[v] = old_ptr[v];
	}
	free(ptr);
	return (ptr1);
}

