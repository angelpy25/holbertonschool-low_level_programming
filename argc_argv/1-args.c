#include <stdio.h>

int main(int argc, char __attribute__((unused)) **argv)
{
	int count = 0;

	while(argc--)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
	
