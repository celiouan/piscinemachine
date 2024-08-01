/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:37:43 by pweber            #+#    #+#             */
/*   Updated: 2024/07/28 19:38:01 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

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
//===========================================================
int	main(int argc, char *argv[])
{
	char	*src;
	char	*dest_0;
	char	*dest_1;
	int	src_len;
	int	dest_len;
	int	n;

	(void) argv;
	if(argc != 4)
	{
		printf("Enter two strings (dest >= src) and int n <= src");
		return (-1);
	}
	dest_0 = argv[1];	
	dest_1 = argv[1];
	src = argv[2];
	n = atoi(argv[3]);
	dest_len = ft_strlen(dest_0);
	src_len = ft_strlen(src);
	
	printf("=======================\n");
	printf("dest string = %s, length %d\n", dest_0, dest_len);
	printf("src string = %s, length %d\n", src, src_len);
	printf("chars to copy = %d\n", n);
	printf("=======================\n");

	// CHECK FOR STRING LENGTH ISSUES

	if (dest_len < n)
	{
		printf("\nWARN: not enough place in dest. Strange shit can happen\n");
//		return (-1);
	}

	if (src_len < n)
	{
		printf("\nWARNING: not enough characters in src, can't copy %d.\n\n", n);
//		return (-1);
	}

	// NO LENGTH ISSUES
	
	printf("using strncpy: dest = %s\n", strncpy(dest_0, src, n));
	printf("=======================\n");	
	ft_strncpy(dest_1, src, n);
	printf("using ft_strcpy: dest = %s\n", dest_1);
	printf("=======================\n");

	
	return (0);
}
