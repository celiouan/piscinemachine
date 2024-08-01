/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:52:21 by pweber            #+#    #+#             */
/*   Updated: 2024/07/23 20:12:39 by pweber           ###   ########.fr       */
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

	str = "0140235";
	ft_putstr(str);
	return (0);
}*/
