#include <stdio.h>
// =========================================================
// ft_strlen.c	v 1.0	pwp		2024 - 07 - 23
//
// returns number characters without NULL terminator
// Works for ASCII 0-127
// returns strlen = 0 if nullstring "" (*str == 0)
// =========================================================

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str > 0)
	{
		i++;
		str++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str;
	int		len;

	str = "";
	len = ft_strlen(str);
	printf("string %s, length %d", str, len);
	return (0);
}
*/
