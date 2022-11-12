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

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if (*s1 == *s2)
			;
		else
			return (*s1 - *s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}

/*int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%s // %s\n", argv[1], argv[2]);
	printf("%d \n", strncmp(argv[1], argv[2], 3));
	printf("%d \n", ft_strncmp(argv[1], argv[2], 3));
	return (0);
}*/
