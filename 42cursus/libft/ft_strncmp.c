/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:40:39 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/26 09:40:41 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strnscmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			*aux1;
	char			*aux2;

	i = 0;
	aux1 = s1;
	aux2 = s2;
	while (i < n && (*aux1 == '\0' || aux2 == '\0'))
	{
		if (*aux1 != *aux2)
			return (*aux2 - *aux1);
		i++;
		aux1++;
		aux2++;
	}
	return (0);
}

/*int	main (int argc, char *argv[])
{
	(void) argc;
	printf("%s // %s\n", argv[1], argv[2]);
	printf("%d \n", ft_strnscmp(argv[1], argv[2], 3));
	return (0);
}*/
