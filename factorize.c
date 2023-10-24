#include "factor.h"

/**
 * factorize - the value that factorize a number
 * @buffer: pointer to the address of the number
 * Author: Natoli abera
 * Return: always 0
 */
int factorize(char *buffer)
{

	u_int32_t x;
	u_int32_t i;

	x = atoi(buffer);


	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			printf("%d = %d * %d \n", x, x / i, i);
			break;
		}
	}

return (0);
}
