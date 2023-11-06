#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age 
 * @owner: dog's owner 
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

/**
 * *_strcpy - copies the string pointed to by srcpy including the terminating null byte (\0) to the buffer pointed to by dest
 * @dest: pointer to the buffer in which to copy the string
 * @src: string copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * * _strlen - returns the length of a string
 * @s: string to be evaluated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

