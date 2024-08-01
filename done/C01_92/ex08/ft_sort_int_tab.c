/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:07:23 by pweber            #+#    #+#             */
/*   Updated: 2024/07/27 15:07:29 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	while (size > 2)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i ++;
		}
		i = 0;
		size --;
	}
}
/*
int main(int argc, char *argv[])
{
    int size;
    int i;
    int tab[argc-1];
 
    size = argc-1;

	// Print array on screen
     i = 0;
    while (i < size)
    {
        printf("%s\t", argv[i + 1]);
        tab[i] = atoi(argv[i + 1]);
        i ++;
    }
    printf("\n");

	// Call function
    ft_sort_int_tab(tab, size);

	// Print array on screen
    i = 0;
    while (i < size)
    {
        printf("%d\t", tab[i]);
        i ++;
    }
    printf("\nsdf");
}*/
