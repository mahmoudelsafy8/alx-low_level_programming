#include <stdio.h>

void first(void)__attribute__ ((constructor));

/**
 * first - print sentence before the main function is executed.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"bore my house upon my back!\n");
}
