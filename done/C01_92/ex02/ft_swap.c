/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:28:08 by pweber            #+#    #+#             */
/*   Updated: 2024/07/28 14:29:56 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n_a;
	int	n_b;

	n_b = *b;
	n_a = *a;
	*a = n_b;
	*b = n_a;
}
/*
int	main(void)
{
	int	n_a;
	int	n_b;

	n_a = 3;
	n_b = 7;
	printf("n_a = %d, n_b = %d\n", n_a, n_b);
	ft_swap(&n_a, &n_b);
	printf("n_a = %d, n_b = %d\n", n_a, n_b);
	return (0);
}*/
