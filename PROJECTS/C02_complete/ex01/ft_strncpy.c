/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:40:18 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/21 15:40:20 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < (n - 1))
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	int	n = 19;
	char destino[] = "aaaaaaaaa";
	char fonte[] = "Hell!";

	printf("%s --- %s \n", fonte, destino);	
	strncpy(destino, fonte, n);
	ft_strncpy(destino, fonte, n);
	printf("%s --- %s \n", fonte, destino);

	return (0);
}*/
