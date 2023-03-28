#include "main.h"

/**
 * puts2 - Check code
 * @str: function argument
 */
void puts2(char *str)
{
	int indx = 0;

	while (str[indx] != '\0')
	{
		if (indx % 2 == 0)
			_putchar(str[indx]);
		indx++;
	}
	_putchar('\n');
}
