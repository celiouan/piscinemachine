/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:20:52 by pweber            #+#    #+#             */
/*   Updated: 2024/07/29 14:20:56 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0' && is_alpha)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			is_alpha = 1;
		}
		else
		{
			return (0);
		}
		str ++;
	}
	return (is_alpha);
}
/*
//===========================================================
	
int main(int argc, char *argv[])
{
	int is_alpha;
	(void) argc;
	
	is_alpha = 0;
	
	is_alpha = ft_str_is_alpha(argv[1]);
	printf("\n%d\n", is_alpha);
	return(0);
}*/
