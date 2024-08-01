/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:06:16 by pweber            #+#    #+#             */
/*   Updated: 2024/07/30 13:06:20 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	unsigned int n;
	
	n = atoi(argv[3]);
	printf("\n%d\n", ft_strncmp    (argv[1], argv[2], n));
	return(0);
}
*/
// ./a.out Hall4 Hall2 3
// ./a.out Hall4 Hall2 4
// ./a.out "" "" 2 
