/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:24:14 by pweber            #+#    #+#             */
/*   Updated: 2024/07/29 16:24:20 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z'))
			str ++;
		else
			return (0);
	}
	return (1);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	printf("\n%d\n", ft_str_is_uppercase(argv[1]));
	return(0);
}*/
