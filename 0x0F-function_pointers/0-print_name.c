#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: str
 * @f: Function pointers
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
