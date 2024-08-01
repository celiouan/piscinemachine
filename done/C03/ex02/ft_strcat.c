/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:56:48 by pweber            #+#    #+#             */
/*   Updated: 2024/07/30 13:56:51 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i ++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	printf("\n%s\n", ft_strcat(argv[1], argv[2]));
	return(0);
}



*/
/*
ex02/ft_strcat.c
-------------------------------------------------------------------------
Allowed functions : None

• Reproduce the behavior of the function strcat (man strcat).
• Here’s how it should be prototyped :

	char *ft_strcat(char *dest, char *src);
*/
