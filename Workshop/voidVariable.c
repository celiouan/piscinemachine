#include <stdio.h>

int f1(int a, int b)
{
  (void)b;
  return a;
}



int f2(int a, int b)
{
  return a;
}

int main(void)
{
	int pickFunction;
	pickFunction = 2;

	if(pickFunction == 1)
		printf("f1: %d\n", f1(42, 55));
	else
		printf("f2: %d\n", f2(42, 55));

	return (0);
}

