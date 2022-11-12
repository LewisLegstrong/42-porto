/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:35:24 by luiduart          #+#    #+#             */
/*   Updated: 2022/08/04 14:35:26 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		str++;
		cont++;
	}
	return (cont);
}

char	*ft_strdup(char *src)
{
	char	*c_str;
	char	*buffer;

	c_str = (char *)malloc (sizeof(ft_strlen(src)) + 1);
	buffer = c_str;
	while (*src)
	{
		*c_str = *src;
		src++;
		c_str++;
	}
	return (buffer);
}

/*int	main(void)
{
	char *str = "Hello World!";
	char *dest;

	dest = ft_strdup(str);
	printf("%s\n", dest);
	return (0);
}*/