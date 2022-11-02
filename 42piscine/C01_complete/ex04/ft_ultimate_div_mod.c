/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:35:02 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/19 15:35:04 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int     main(void)
{
        int i = 98;
        int j = 10;
        int *a;
        int *b;
        a = &i;
        b = &j;
        printf("%d %d \n", i, j);
        ft_ultimate_div_mod(a, b);
        printf("%d %d", i, j);
}
*/