#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print a multiplication timetable
 * @n: starting input
 *
 */
void print_times_table(int n)
{
	int row, col;
	int width = 4;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (col == 0)
			{
				printf("%d", row * col);
			}
			else
			{
				printf(",%*d", width, row * col);
			}
		}
		printf("\n");
	}
}
