#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: what is the dog's name?
 * @age: how old is the dog?
 * @owner: to whom the dog belongs
 *
 * Return: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_dog(struct dog *d);

#endif
