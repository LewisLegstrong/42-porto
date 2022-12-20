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

static int	find_stuart_little(char *big, char *little, size_t len)
{
	while (*big && *little && len > 0)
	{
		if (*little != *big)
			return (0);
		little++;
		big++;
		len--;
	}
	if (*little == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*auxbig;
	size_t	i;

	i = -1;
	auxbig = (char *)big;
	if (*little == '\0')
		return ((char *)big);
	while (++i < len)
	{
		if (*little == *auxbig)
		{	
			if (find_stuart_little(auxbig, (char *)little, (len - i)))
				return (auxbig);
		}
		auxbig++;
	}
	return (NULL);
}

/*int main()
{
	char *s1 = "see FF your FF return FF now FF";
	//char *s2 = "FF";
	size_t max = strlen(s1);
	char *i2 = ft_strnstr(s1, s1, max);
	printf("%s\n", i2);
	return (0);
}*/