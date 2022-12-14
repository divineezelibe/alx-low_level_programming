#include <stdio.h>

/**
 * main - Prints multiples of 10 etc.
 *
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;
	int i;
	for (i = 3; i < 1024; i++) {

		if ((i%3)==0 || (i%5)==0)
			sum += i;
	}
	
	printf("%d",sum);

	return (0);
}


