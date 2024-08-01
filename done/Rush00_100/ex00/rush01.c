/* ************************************************************************** */
/*		                                                                    */
/*		                                                :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*		                                            +:+ +:+         +:+     */
/*   By: pweber <marvin@42.fr>		              +#+  +:+       +#+        */
/*		                                        +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:06:25 by pweber		    #+#    #+#             */
/*   Updated: 2024/07/17 18:35:28 by pweber           ###   ########.fr       */
/*		                                                                    */
/* ************************************************************************** */

extern	void	ft_putchar(char c);
extern	int	write_first_row(int len);
extern	int	write_middle_row(int len);
extern	int	write_last_row(int len);

int	rush(int x, int y)
{
	int	counter;

	counter = 0;
	if (y <= 0 || x <= 0)
	{
		write(fd: 1, buf: "Error\n", n: 6);
	}
	write_first_row(x);
	if (y > 1)
	{
		while (counter < y - 2)
		{
			write_middle_row(x);
			counter ++;
		}
		write_last_row(x);
	}
	return (0);
}
