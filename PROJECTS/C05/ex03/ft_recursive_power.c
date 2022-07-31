/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:26:44 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/29 11:26:47 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (1);
}

int main(void)
{
	int n = 5;
	int power = 5;
	printf("%d \n", ft_recursive_power(n, power));
}
