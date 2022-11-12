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


char *ft_strnstr(const char *big, const char *little, size_t len);
{
	char	*auxlit;
	char	*auxbig;
	int	i;

	if(little == '\0')
		return (big);
	while(*auxbig++ != '\0')
	{
		if(*auxbig == *auxlit)
			big == auxbig;
		i = 0;
		while(i++ <= len)
		{
			if(auxlit == auxbig)	
			{
				auxbig++;
				auxlit++;
			}
		}
		if(i == len)
			return(big);
	}
	return(NULL);
}
