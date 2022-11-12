/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:58:23 by luiduart          #+#    #+#             */
/*   Updated: 2022/08/04 16:58:25 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	*aux;

	if (min > max)
		return(NULL);
	array = malloc (sizeof(int) * (max - min)); 
	aux = array;
	while (min < max)
	{	
		*aux = min;
		aux++;
		min++;
	}
	return ();
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
