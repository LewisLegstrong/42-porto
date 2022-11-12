/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:25:42 by luiduart          #+#    #+#             */
/*   Updated: 2022/08/04 16:25:44 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	*aux;

	if (min > max)
		return(0);
	array = malloc (sizeof(int) * (max - min)); 
	aux = array;
	while (min < max)
	{	
		*aux = min;
		aux++;
		min++;
	}
	return (array);
}

/*int main(void)
{
	int min;
	int max;
	int *range;

	min = -5000;
	max = 5000;
	range = ft_range(min, max);
	int i = 0;

	while (i < max-min)
	{
		printf("%d -- ", range[i]);
		i++;
	}

	return(0);
}
*/