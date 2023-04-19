#include "function_pointers.h"

/**
 * print_name - Check code
 * @name: first arg
 * @f: second arg
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
