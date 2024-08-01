/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:00:32 by pweber            #+#    #+#             */
/*   Updated: 2024/08/01 13:00:36 by pweber           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src [i] != '\0' && i < size - len_dest - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*

int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	int	n;
	
	n = atoi(argv[3]);
	printf("\n%s, %d\n", argv[1], ft_strlcat(argv[1], argv[2], n));
	return(0);
}

*/
