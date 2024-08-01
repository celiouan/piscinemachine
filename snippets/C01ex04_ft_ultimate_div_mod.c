/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:01:05 by pweber            #+#    #+#             */
/*   Updated: 2024/07/23 19:48:58 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n_a;
	int	n_b;

	n_a = *a;
	n_b = *b;
	*a = n_a / n_b;
	*b = n_a % n_b;
}
/*
int	main(int argc, char **argv)
{
	int	n_a;
	int	n_b;

	(void) argc;
	(void) argv;
	n_a = atoi(argv[1]);
	n_b = atoi(argv[2]);
	if (n_b == 0)
	{
		printf ("Error: Dividing by 0\n");
		return (1);
	}
	else
	{
		printf("%d : %d = ", n_a, n_b);
		ft_ultimate_div_mod(&n_a, &n_b);
		printf("%d mod %d\n", n_a, n_b);
	}
	return (0);
}*/
