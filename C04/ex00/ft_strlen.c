/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:44:49 by pweber            #+#    #+#             */
/*   Updated: 2024/08/01 15:44:51 by pweber           ###   ########.fr       */
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
/*
int	main(void)
{
	char	*str;
	int		len;

	str = "235";
	len = ft_strlen(str);
	printf("string %s, length %d", str, len);
	return (0);
}
*/
/*
================================================================================
Turn-in directory : ex00/
Files to turn in : ft_strlen.c
Allowed functions : None
• Create a function that counts and returns the number of characters in a string.
• Here’s how it should be prototyped :
int ft_strlen(char *str);

*/
