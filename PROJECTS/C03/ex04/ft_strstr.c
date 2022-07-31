/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:15:30 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/27 09:15:32 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{	
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{	
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	needle[] = "joao";
	char	haystack[] = "apkfiabgjoigjooijgoiangoanoga aofngaoiga goaga ga gibaia";
	
	printf("%s \n", ft_strstr(haystack, needle));
	return (0);
}