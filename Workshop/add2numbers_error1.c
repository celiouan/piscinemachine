#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int a;
	int b;

	a = atoi(argv[0]);
	b = atoi(argv[1]);    
	printf("a + b = %d\n", a + b);
	return (0);
}
