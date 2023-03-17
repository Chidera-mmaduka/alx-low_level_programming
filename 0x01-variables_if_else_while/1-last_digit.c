#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - prints a text according number
 * Return: Always (Success)
 *
 */

int main(void)

{
<<<<<<< HEAD
int n, lastd;
=======
  
int n, lasted;
>>>>>>> 28c80ad4478c1fc5e295d3b2d6dfabce32ee6acd

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
{
printf("Last digit of %d is %d and is greater tan 5\n", n, lastd);
}
else if (lastd == 0)
printf("Last digit of %d is %d and is 0\n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
}
return (0);
}
