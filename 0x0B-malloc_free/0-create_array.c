#include "main.h"







char *create_array(unsigned int size, char c)
{	
	if (size == 0)
		return (NULL);

	char *s;
	s = malloc(sizeof(s)*size);

	if (s == 0)
		return (NULL);

	for (int i = 0; i < size; i++)
	{
		s[i] = c;
	}


	return (s);
}
