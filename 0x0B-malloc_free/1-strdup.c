#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to newly allocated space
 * @str: pointer to where string is
 *
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{

	int str_len;
	int i;
	char *ptr;

	str_len = 0;

	if (str == NULL)
		return (NULL);

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	ptr = malloc(sizeof(char) * str_len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}

