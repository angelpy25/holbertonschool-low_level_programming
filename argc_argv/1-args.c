#include <stdio.h>

int main(int argc, char **argv)
{
	int count = 0;

	while(argc--)
	{
		*argv++;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
	
