#include "main.h"

/**
 * rev_string - Check code
 * @s: function argument
 *
 */
void rev_string(char *s)
{
	int i = 0, len;
	char temp;

	len = _strlen(s);

	while (i < len /2)
	{	
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
