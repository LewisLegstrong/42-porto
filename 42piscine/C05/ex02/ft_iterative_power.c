/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:26:25 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/29 11:26:28 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int num;

	num = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
		while(power > 0)
		{
			num = num * nb;
			power--;
		}
	return (num);	
}

int main(void)
{
	int n;
	int power;
	
	n = 2;
	power = 3;
	printf("%d \n", ft_iterative_power(n, power));
	return (0);
}
