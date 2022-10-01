#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index =1; index < argv; index++)
	{
		multiplication = multiplation * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}

