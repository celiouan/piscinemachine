#include <stdio.h>	//for printf
#include <stdlib.h>	//for atoi

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	int a;
	int b;

	a = atoi (argv[1]);
	b = atoi (argv[2]);
	
	printf("\ncommand line input: a = %d, b = %d\n\n", a, b);
    
	printf("a + b = %d\n\n", a + b);
}
