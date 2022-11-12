/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:53:40 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/25 08:53:42 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *src);


size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*aux;
	int				src_size;
	unsigned int	i;

	src_size = ft_strlen(src);
	aux = dest;
	i = 0;
	if (size > 0)
	{
		while ((*src != '\0') && (i < (size - 1)))
		{
			*aux = *src;
			aux++;
			src++;
			i++;
		}
		*aux = '\0';
	}
	return (src_size);
}

/*
int	main(void)
{
	int size = 3;
	char destino[3];
	char fonte[] = "Hello";

	ft_strlcpy(destino, fonte, size);

	printf("%u -- %s\n%u -- %s\n",ft_strlen(fonte), 
	fonte, ft_strlcpy(destino, fonte, size), destino);
}
*/
