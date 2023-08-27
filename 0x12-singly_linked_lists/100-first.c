#include <stdio.h>
#include "lists.h"
/**
 * first - print sentence before the main function is executed.
 */
void first(void)__attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("bore my house upon my back!\n");
}
