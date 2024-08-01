/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:36:05 by pweber            #+#    #+#             */
/*   Updated: 2024/07/29 16:36:09 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i ++;
	}
	return (str);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	printf("\n%s\n", ft_strupcase(argv[1]));
	return(0);
}
*/
/*============================================================
ex07/ft_strupcase.c
Allowed functions : None
• Create a function that transforms every letter to uppercase.
• Here’s how it should be prototyped :

	char *ft_strupcase(char *str);

• It should return str
*/
