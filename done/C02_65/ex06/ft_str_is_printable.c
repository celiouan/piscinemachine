/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:27:39 by pweber            #+#    #+#             */
/*   Updated: 2024/07/29 16:27:43 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 127))
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
	printf("\n%d\n", ft_str_is_printable(argv[1]));
	return(0);
}
*/
// printable ascii go from 32 (!) to 127 (~)
