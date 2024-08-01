#include <stdio.h>	//for printf

int	main(int argc, char *argv[])
{
	int a;
	int b;

	(void) argv;
	printf("\nargv[0] = %s\n", argv[0]);
	printf("argv[1] = %s\n", argv[1]);
	printf("argv[2] = %s\n\n", argv[2]);
	
	return (0);
}
