/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:19:08 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/05 10:19:39 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!s && !d)
		return (NULL);
	if (s < d){
		s += n-1;
		d += n-1;
		while (n-- != 0)
			*d-- = *s--;
	}
	else	
	{
		while (n-- != 0)
			*d++ = *s++;
	}
	return (dest);
}
