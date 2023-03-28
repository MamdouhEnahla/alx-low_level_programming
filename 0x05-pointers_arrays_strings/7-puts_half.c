#include "main.h"

/**
 * puts_half - Check code
 * @str: function argument
 */
void puts_half(char *str)
{
	int indx = 0;

	while (str[indx])
		indx++;

	indx++;

	for (indx /= 2; str[indx] != '\0'; indx++)
		_putchar(str[indx]);
	_putchar('\n');
}
