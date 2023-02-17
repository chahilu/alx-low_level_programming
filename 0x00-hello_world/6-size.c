#include <stdio.h>
/**
*main -start of program
*Return: Always retrn 0 (success)
*/
int main(void)
{
	int i;
	long int w;
	long long int x;
	char y;
	float z;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
