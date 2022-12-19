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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char			*aux1;
	unsigned char			*aux2;

	if (!n)
		return (0);
	n -= 1;
	aux1 = (unsigned char *) s1;
	aux2 = (unsigned char *) s2;
	while (n-- != 0 && *aux1 && *aux2)
	{
		if (*aux1 == *aux2)
		{
			aux1++;
			aux2++;
		}
		else
			break;
	}
	return (*aux1 - *aux2);
}

/*int	main (int argc, char *argv[])
{
	(void) argc;
	printf("%s // %s\n", argv[1], argv[2]);
	printf("%d \n", ft_strnscmp(argv[1], argv[2], 3));
	return (0);
}*/
