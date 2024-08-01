/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:45:21 by pweber            #+#    #+#             */
/*   Updated: 2024/08/01 15:45:26 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str > 0)
	{
		write (1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "\n";
	ft_putstr(str);
	return (0);
}

*/
/*
=================================================================================
Turn-in directory : ex01/
Files to turn in : ft_putstr.c
Allowed functions : write
• Create a function that displays a string of characters on the standard output.
• Here’s how it should be prototyped :
void ft_putstr(char *str);

*/
