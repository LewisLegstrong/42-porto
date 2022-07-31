/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:13:55 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/19 15:13:58 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int x = 55;
	int y = 10;
	int d, m;
	int *ptr_x=&d;
	int	*ptr_y=&m;

	ft_div_mod(x,y, ptr_x,ptr_y);

	printf("%d %d",*ptr_x, *ptr_y);
	return 0;
}
*/