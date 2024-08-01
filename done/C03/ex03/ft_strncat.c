/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:32:19 by pweber            #+#    #+#             */
/*   Updated: 2024/07/30 14:32:22 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str > 0)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
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
	int	n;
	
	n = atoi(argv[3]);
	printf("\n%s\n", ft_strncat(argv[1], argv[2], n));
	return(0);
}
*/
