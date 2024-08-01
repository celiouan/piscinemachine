/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:59:14 by pweber            #+#    #+#             */
/*   Updated: 2024/07/14 17:55:10 by jsimonit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	write_first_row(int len)
{
	int	counter;

	counter = 0;
	if (len == 1)
	{
		ft_putchar('/');
	}
	if (len == 2)
	{
		ft_putchar('/');
		ft_putchar('\\');
	}
	if (len > 2)
	{
		ft_putchar('/');
		while (counter < len - 2)
		{
			ft_putchar('*');
			counter ++;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
	return (0);
}

int	write_middle_row(int len)
{
	int	counter;

	counter = 0;
	if (len == 1)
	{
		ft_putchar('*');
	}
	if (len == 2)
	{
		ft_putchar('*');
		ft_putchar('*');
	}
	if (len > 2)
	{
		ft_putchar('*');
		while (counter < len - 2)
		{
			ft_putchar(' ');
			counter ++;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
	return (0);
}

int	write_last_row(int len)
{
	int	counter;

	counter = 0;
	if (len == 1)
	{
		ft_putchar('\\');
	}
	if (len == 2)
	{
		ft_putchar('\\');
		ft_putchar('/');
	}
	if (len > 2)
	{
		ft_putchar('\\');
		while (counter < len - 2)
		{
			ft_putchar('*');
			counter ++;
		}
		ft_putchar('/');
	}
	ft_putchar('\n');
	return (0);
}
