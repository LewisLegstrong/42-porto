/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:02:45 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/12 12:02:50 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux	= (char *)s;
	aux = aux + ft_strlen((char *)s);
	while(s != aux)
	{
		if (*aux == c)
		{
			return(aux);
			break;
		}
		aux--;
	}
	return(NULL);
} 
