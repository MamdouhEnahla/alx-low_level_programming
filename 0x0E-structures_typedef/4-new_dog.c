#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Check code
 * @s: function arg
 *
 * Return: an integer length 
 */
int _strlen(char *s)
{
	int len = 0;

	while (s)
	{
		len++;
	}

	return (len);
}

/**
 * *_strcpy - check code
 * @dest: first arg
 * @src: second arg
 *
 * Return: a pointer 
 */
char *_strcpy(char *dest, char *src)
{
	int len, i = 0;

	len = _strlen(src);
	
	while (src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - check code
 * @name: first arg
 * @age: second arg
 * @owner: third arg
 *
 * Return: a pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len + 1));

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	
	if (!dog->owner)
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
