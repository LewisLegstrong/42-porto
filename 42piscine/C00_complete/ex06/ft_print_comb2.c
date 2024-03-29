/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:33:15 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/20 13:33:18 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c1, char c2, char c3, char c4)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (!(c1 == '9' && c2 == '8' && c3 == '9' && c4 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	c[4];

	c[0] = '0';
	while (c[0] <= '9')
	{
		c[1] = '0';
		while (c[1] <= '9')
		{	
			c[2] = '0';
			while (c[2] <= '9')
			{
				c[3] = '0';
				while (c[3] <= '9')
				{
					if ((c[2] == (c[0]) && c[3] > c[1]) || c[2] > c[0])
						ft_write(c[0], c[1], c[2], c[3]);
					c[3]++;
				}
				c[2]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
