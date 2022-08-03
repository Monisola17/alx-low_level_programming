#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: input name
 * @f: function pointer
 *
 * Retun: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
