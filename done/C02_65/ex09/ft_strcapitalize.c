/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:22:23 by pweber            #+#    #+#             */
/*   Updated: 2024/07/29 17:22:27 by pweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i ++;
	}
	return (str);
}

//=========================================================================
int	is_number(char c)
{
	if (c >= '0' && c <= '9' )
		return (1);
	else
		return (0);
}

//=========================================================================
int	is_low_letter(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

//=========================================================================
char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		cap_next;

	str = ft_strlowcase(str);
	i = 0;
	c = 'a';
	cap_next = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (is_low_letter(c))
		{
			if (cap_next)
				str[i] -= 32;
			cap_next = 0;
		}
		else if (is_number(c))
			cap_next = 0;
		else
			cap_next = 1;
		i ++;
	}
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	(void) argc;
	printf("\n%s\n", ft_strcapitalize(argv[1]));
	return (0);
}*/
/*=========================================================================
ex09/ft_strcapitalize.c
-------------------------------------------------------------------------
Allowed functions : None
• Create a function that capitalizes the first letter of each word and 
transforms all
other letters to lowercase.
• A word is a string of alphanumeric characters.
• Here’s how it should be prototyped :

	char *ft_strcapitalize(char *str);

• It should return str.
• For example:
salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
• Becomes:
Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
=========================================================================
*/
