#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: input the width
 * @height: input the height
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int e, f;

	if (width <= 0 || height <= 0)
		return (NULL);
	n = malloc(sizeof(int *) * height);
	if (n == NULL)
		return (NULL);
	for (e = 0; e < height; e++)
	{
		n[e] = malloc(sizeof(int) * width);
		if (n[e] == NULL)
		{
			for (; e >= 0; e--)
				free(n[e]);
			free(n);
			return (NULL);
		}
	}
	for (e = 0; e < height; e++)
	{
		for (f = 0; f < width; f++)
			n[e][f] = 0;
	}
	return (n);
}
