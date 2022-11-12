/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:50:11 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/12 12:50:14 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

int memcmp(const void *s1, const void *s2, size_t n)
{
	int	counter;
	unsigned char	*aux1;
	unsigned char	*aux2;

	*aux1 = (unsigned char *)s1;
	*aux2 = (unsigned char *)s2;

	counter = 0;
	while(counter <= n || (*aux1 != '\0' || *aux2 != '\0'))
	{
		if(*aux1 != *aux2)
			return (*aux1 - *aux2);
		aux1++;
		aux2++;	
		counter++;
	}
	return (0)
}
