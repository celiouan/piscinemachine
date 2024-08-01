/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:17:57 by pweber            #+#    #+#             */
/*   Updated: 2024/07/15 11:45:56 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
	char	c;

	c = 'a';
	printf("Enter single character: ");
	scanf("%c", &c);
	ft_putchar (c);
	return (0);
}
