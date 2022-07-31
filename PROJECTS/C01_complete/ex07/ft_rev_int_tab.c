/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:38:07 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/19 17:38:08 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *st_ptr, int *en_ptr)
{
	int	temp;

	temp = *st_ptr;
	*st_ptr = *en_ptr;
	*en_ptr = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*f_arr;
	int	cont;

	cont = size / 2;
	f_arr = tab + (size - 1);
	while (cont > 0)
	{
		swap(tab, f_arr);
		tab++;
		f_arr--;
		cont--;
	}
}


int 	main (void)
{
	int num[7] = {0, 2, -3, 4, 5, 6, 7};
	int i;
	int tam;
	

	ft_rev_int_tab(num, 7);
	tam = 7;
	i = 0;
	while(tam > 0)
	{
		printf("%d ", num[i]);
		i++;
		tam--;
	}
	return (0);
}

