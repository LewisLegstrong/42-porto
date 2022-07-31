/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:06:48 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/20 10:06:51 by luiduart         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	*pos_s;
	int	*pos_i;
	int	*pos_f;
	int	cont;

	pos_i = tab;
	pos_f = tab + (size - 1);
	pos_s = pos_i;
	cont = 0;
	while (cont < size)
	{
		while (pos_i < pos_f)
		{
			if (*pos_i > *pos_s)
				swap(pos_i, pos_s);
			pos_i++;
		}
		pos_i = tab;
		pos_s++;
		cont++;
	}
}

/*
int 	main(void)
{
	int num[7] = {6, 0, 3, 4, -5, 1, 14};
	int i;
	int tam;
	
	ft_sort_int_tab(num, 7);
	tam = 7;
	i = 0;
	while (tam > 0)
	{
		printf("%d ", num[i]);
		i++;
		tam--;
	}
	return (0);
}
*/