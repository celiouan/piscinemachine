/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:00:54 by pweber            #+#    #+#             */
/*   Updated: 2024/07/29 16:01:00 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
			str ++;
		else
			return (0);
	}
	return (1);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	printf("\n%d\n", ft_str_is_lowercase(argv[1]));
	return(0);
}
*/
//===========================================================
/*
ex04/ft_str_is_lowercase.c
-------------------------------------------------------------------------
Allowed functions : None

• Create a function that returns 1 if the string given
 as a parameter contains only
lowercase alphabetical characters, and 0 if it contains 
any other character.
• Here’s how it should be prototyped :

	int ft_str_is_lowercase(char *str);

• It should return 1 if str is empty.
*/
