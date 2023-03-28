#include <stdio.h>
/**
 * main - differenciating odd and even numbers
 *
 * Return: always 0
 */
int main() {
	int i;
	for(i=1; i<=100; i++)
	{
		if(i%2==0)
		{
			printf("\n even number: %d", i);
		}
		else
		{
			printf("\n       odd number: %d", i);
		}
	}
	printf("\n");

	return 0;
}
