/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:46:22 by pweber            #+#    #+#             */
/*   Updated: 2024/07/28 14:10:09 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(int argc, char **argv)
{
	int	nbr;
	int	*p_nbr;

	(void) argc;
	nbr = atoi(argv[1]);	// 	read value from command line into variable
	p_nbr = &nbr;			// read the address of variable

	printf("number from input: %d\n", nbr);

	ft_ft(p_nbr);			//	write 42 into pointer address

	printf("number after ft_ft: %d\n", nbr);
	return (0);
}*/
