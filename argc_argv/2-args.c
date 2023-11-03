#include <stdio.h>

/**
 * main - print all the arguments
 * @argc: length of arguments
 * @argv: vector of array
 * Return: 0
 */

int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
		return (0);
}
