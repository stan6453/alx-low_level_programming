#include <stdio.h>

void housekeeping(void) __attribute__((constructor));

void housekeeping(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
