/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:27:42 by pweber            #+#    #+#             */
/*   Updated: 2024/07/31 13:27:46 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	offset;

	i = 0;
	offset = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[offset] != '\0')
	{
		while (to_find[i] == str[offset + i])
		{
			i ++;
			if (to_find[i] == '\0')
				return (str + offset);
		}
		offset ++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	char *result;
	
	result = ft_strstr(argv[1], argv[2]);
	
	printf("\n%s\n", result);
	return(0);
}
*/
