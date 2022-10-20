#include <stdio.h>

void housekeeping(void) __attribute__((constructor));



/**
 * housekeeping - does some action before the main function runs
 */
void housekeeping(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
