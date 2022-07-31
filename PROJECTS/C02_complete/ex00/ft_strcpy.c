/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:22:17 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/20 15:22:19 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*aux;
	char	*aux2;

	aux = src;
	aux2 = dest;
	while (*aux)
	{
		*aux2 = *aux;
		aux++;
		aux2++;
	}
	*aux2 = '\0';
	return (dest);
}

/*
int	main(void)
{
	char destino[] = "Ola";
	char fonte[] = "Hello 42!";
	
	printf("%s --- %s \n", destino, fonte);
	strcpy(destino, fonte);
	ft_strcpy(destino, fonte);
	printf("%s --- %s \n", destino, fonte);

	return (0);
}*/
