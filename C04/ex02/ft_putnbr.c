/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:45:44 by pweber            #+#    #+#             */
/*   Updated: 2024/08/01 15:45:47 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	if (*str == "-" || *str == "+")
	{
		write (1, str, 1);
		str ++;
	}
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		n;
	
	n = atoi(argv[1]);
	
	ft_putnbr(n);
	return (0);
}






// ************************************************************************** */
/*

Turn-in directory : ex02/
Files to turn in : ft_putnbr.c
Allowed functions : write
• Create a function that displays the number entered as a parameter. The function
has to be able to display all possible values within an int type variable.
• Here’s how it should be prototyped :
void ft_putnbr(int nb);
• For example:
◦ ft_putnbr(42) displays "42".

*/
