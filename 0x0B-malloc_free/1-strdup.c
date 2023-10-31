#include "main.h"
#include <stdlib.h>

/**
 * _strdup-Returns a pointer to a newly allocated memory space
 *         containing a duplicate of the string specified as parameter.
 * @str:The string that will be copied.
 *
 * Return:If str == There is no memory or insufficient memory-NULL.
 *         Otherwise-A reference to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
