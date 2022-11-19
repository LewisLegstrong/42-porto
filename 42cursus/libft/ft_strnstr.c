/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:55:53 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/12 13:55:55 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*auxlit;
	char	*auxbig;
	size_t	i;

	if(*little == '\0')
		return ((char *)big);
	while(*auxbig++ != '\0')
	{
		if(*auxbig == *auxlit)
			big = auxbig;
		i = 0;
		while(i++ <= len)
		{
			if(auxlit == auxbig)	
			{
				auxbig++;
				auxlit++;
			}
		}
		if(i == len)
			return((char *)big);
	}
	return(NULL);
}
