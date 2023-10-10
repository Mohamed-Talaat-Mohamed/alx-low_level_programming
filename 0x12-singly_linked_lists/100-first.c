#include <stdio.h>
#include <stdlib.h>

void before(void)__attribute__((constructor));

/**
 * before - a function that prints custom message
 *	before the main function is executed
*/
void before()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return;
}
