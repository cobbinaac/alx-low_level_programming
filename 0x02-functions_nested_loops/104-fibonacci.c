#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 *
 */

int main(void)
{
	int counter = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}


#include <unistd.h>


/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error. -1 is returned, and errno is set appropriately
 */

int _putchar(char c)

{
         return(write 1, &c, 1));
}


