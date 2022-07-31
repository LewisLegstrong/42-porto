/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:13:37 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/26 09:13:39 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i)
{
	char	c;

	c = i + 48;
	write(1, &c, 1);
}

/*void	ft_while(void)
{
	while ( < 9)
		ft_putchar
		++
}*/

void	ft_print_combn(int n)
{
	write(1, &n, 1);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
