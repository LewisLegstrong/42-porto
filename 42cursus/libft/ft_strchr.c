/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:09 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/05 15:42:11 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	char	a;

	tmp = (char *)s;
	a = (char)c;
	while (*tmp)
	{
		if (*tmp == a)
			return (tmp);
		tmp++;
	}
	if (a == '\0' && *tmp == '\0')
		return (tmp);
	return (NULL);
}

int main()
{
	
	char *str = "teste";
	char *st2 = "teste";
	printf("%p - %s\n", str, str);
	printf("%p - %s\n", st2, st2);
	str = ft_strchr(str, 'e');
	st2 = strchr(st2, 'e');
	printf("%p - %s\n", str, str);
	printf("%p - %s\n", st2, st2);
	return 0;
}