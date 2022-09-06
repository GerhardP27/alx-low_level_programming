#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *        main function is executed.
 */
void hare(void)
{
	fprintf(stderr, "You're beat! and yet, you must allow,\n"
			"I bore my house up on my back!\n");
}
