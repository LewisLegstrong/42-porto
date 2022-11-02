/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:26:07 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/29 11:26:10 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{	
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}

int	main(void)
{
	int	n;

	n = 6;
	printf("%d", ft_recursive_factorial(n));
	return (0);
}
