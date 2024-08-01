
  
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc < 1)
		return 0;

	printf("argc >0 \n");

	int i;
	int strsize = 0;
	

//	for (i=1; i<argc; i++)
	while(i<argc)
	{
		strsize += strlen(argv[i]);
		if (argc > i+1)
			strsize++;
		i++;
	}
	
	printf("strsize: %d\n", strsize);
	char *cmdstring;
	cmdstring = malloc(strsize);
	cmdstring[0] = '\0';
	for (i=1; i<argc; i++) {
		strcat(cmdstring, argv[i]);
		if (argc > i+1)
			strcat(cmdstring, " ");
	}
	printf("cmdstring: %s\n", cmdstring);
	return i;
}
