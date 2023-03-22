#include "main.h"

/**
 * print_alphabet - check the code
 *
 * No return
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch < 'z'; ch++)
		_printchar(ch);
	_printchar('\n');
}
