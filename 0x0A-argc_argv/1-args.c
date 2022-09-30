#include <stdio.h>

/**
 * main -> print the name of the program
 * @argc: Count arguments
 * @argv: Argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
