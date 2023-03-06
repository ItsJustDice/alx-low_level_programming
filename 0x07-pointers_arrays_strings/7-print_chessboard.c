#include "main.h"
/**
 * print_chessboard - Entry point
 * Description: Prints the chessboard
 * @a: Character
 */

void print_chessboard(char (*a)[8])
{
	int k, x;

	for (k = 0; a[k][7]; k++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[k][x]);
		}
		_putchar('\n');
	}
}
