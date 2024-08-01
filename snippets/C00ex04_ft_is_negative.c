/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:32:48 by pweber            #+#    #+#             */
/*   Updated: 2024/07/16 14:49:59 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/*
int	main(void)
{
	int	num;

	printf("Input a number between -32,768 and +32,767: ");
	scanf("%d", &num);
	if (num < -32768 || num > 32767)
	{
		printf("number out of range");
		return (-1);
	}
	ft_is_negative(num);
	return (0);
}*/
