#include <stdlib.h>
#include <stdio.h>

int
main(int argc, char * argv[])
{
	int i;
	// Produce 100 random numbers
	srand(0);
	for (i = 0; i < 100; i++)
	{
		printf("%u\n", (unsigned int)rand());
	}
	return 0;
}