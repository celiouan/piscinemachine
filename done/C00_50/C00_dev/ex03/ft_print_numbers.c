/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:36:02 by pweber            #+#    #+#             */
/*   Updated: 2024/07/16 13:42:36 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	letter;

	letter = '0';
	while (letter <= '9')
	{
		write(1, &letter, 1);
		letter ++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
