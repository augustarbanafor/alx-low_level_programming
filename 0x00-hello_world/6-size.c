#include <stdio.h>
/**
*main - print the string in the put function
*
*Return: 0
**/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of an int: %4d byte(s)\n", sizeof(i));
	printf("Size of a long int: %4d byte(s)\n", sizeof(li));
	printf("Size of long long int: %8d byte(s)\n", sizeof(lli);
	printf("Size of a float: %4d byte(s)\n", sizeof(f));
	return (0);
}
