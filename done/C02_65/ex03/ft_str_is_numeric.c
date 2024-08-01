/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:45:51 by pweber            #+#    #+#             */
/*   Updated: 2024/07/29 15:45:54 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	is_num;

	is_num = 1;
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9'))
			is_num = 1;
		else
			return (0);
		str ++;
	}
	return (is_num);
}
/*
//===========================================================
	
int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	int is_num;
	
	is_num = 1;
	
	is_num = ft_str_is_numeric(argv[1]);
	printf("\n%d\n", is_num);
	return(0);
}
*/
