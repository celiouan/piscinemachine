/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:41:26 by pweber            #+#    #+#             */
/*   Updated: 2024/07/30 12:41:29 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	printf("\n%d\n", ft_strcmp(argv[1], argv[2]));
	return(0);
}
*/
/*
➜  ex00 git:(master) ✗ ./a.out as3 as1                

2
➜  ex00 git:(master) ✗ ./a.out as3 as7

-4

*/
