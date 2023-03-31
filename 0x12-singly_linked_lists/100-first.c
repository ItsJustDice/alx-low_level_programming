#include <stdio.h>
/**
 * premain - Entry point
 * Description: function that runs before main
 * Return: nothing
 */
void __attribute__ ((constructor)) hush();
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
