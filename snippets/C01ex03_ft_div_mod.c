/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:45:39 by pweber            #+#    #+#             */
/*   Updated: 2024/07/28 14:14:09 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	n_div;
	int	n_mod;

	(void) argc;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	n_div = 0;
	n_mod = 0;
	if (b == 0)
		printf("Error: divide by 0");
	else
		{
			ft_div_mod(a, b, &n_div, &n_mod);
			printf("%d : %d = %d mod %d\n", a, b, n_div, n_mod);
		}
	return (0);
}*/
