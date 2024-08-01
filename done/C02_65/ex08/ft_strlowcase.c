/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:46:55 by pweber            #+#    #+#             */
/*   Updated: 2024/07/29 16:46:59 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i ++;
	}
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	(void) argc;
	printf("\n%s\n", ft_strlowcase(argv[1]));
	return (0);
}
*/
/*-------------------------------------------------------------------------
ex08/ft_strlowcase.c
Allowed functions : None
• Create a function that transforms every letter to lowercase.
• Here’s how it should be prototyped :

	char *ft_strlowcase(char *str);

• It should return str.*/
