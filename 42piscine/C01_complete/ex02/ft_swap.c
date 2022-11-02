/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:50:39 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/19 14:50:41 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	i;
	int	j;
	int *ptr_i;
	int *ptr_j;

	i = 4;
	j = 6;
	ptr_i = &i;
	ptr_j = &j;

	ft_swap(ptr_i, ptr_j);

	printf("%d %d", i, j);
	return(0);
}
*/