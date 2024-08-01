/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:56:57 by pweber            #+#    #+#             */
/*   Updated: 2024/07/27 14:35:35 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	swap = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}
/*
//=============================================
void	print_array_int(int *tab, int size)
{
	int i;
	
	i = 0;
	while(i < size)
	{
		printf("%d\t", tab[i]);
		i++;
	}
	printf("\n");	
}
//=============================================
int	main(int argc, char **argv)
{
	int	i;
	int	size;
	int	tab[argc];

	i = 0;
	size = argc - 1;

	while(i < size)
	{
		tab[i] = atoi(argv[i+1]);
		i++;
	}

	print_array_int(tab, size);
	ft_rev_int_tab(tab, size);
	print_array_int(tab, size);

	return (0);
}*/
