#include "main.h"

/**
 * more_numbers - Check code
 *
 * Description: print 10 times from 0 to 14
 */
void more_numbers(void)
{
	int c, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar(49);
				c = j % 10;
			}
			_putchar(c + 48);
		}
		_putchar('\n');
	}
}
