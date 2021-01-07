/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 18:41:18 by abang             #+#    #+#             */
/*   Updated: 2021/01/07 18:42:10 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tohexa_p(unsigned long ul)
{
	char			*hexa;
	char			*str;
	unsigned int	len;
	unsigned long	tmp;

	hexa = "0123456789abcdef";
	len = 0;
	tmp = ul;
	while (tmp != 0)
	{
		tmp /= 16;
		len++;
	}
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (ul != 0)
	{
		str[--len] = hexa[ul % 16];
		ul /= 16;
	}
	return (str);
}

char	*ft_tohexa_i(unsigned int j, int i)
{
	char			*hexa;
	char			*str;
	unsigned int	len;
	unsigned int	tmp;

	hexa = (i == 0) ? "0123456789abcdef" : "0123456789ABCDEF";
	len = 0;
	tmp = j;
	while (tmp != 0)
	{
		tmp /= 16;
		len++;
	}
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (j != 0)
	{
		str[--len] = hexa[j % 16];
		j /= 16;
	}
	return (str);
}
