/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 13:42:45 by abang             #+#    #+#             */
/*   Updated: 2020/12/26 15:45:57 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_strrev(char *str, int len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		len--;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	int		mod;
	int		flag;

	len = ft_intlen(n);
	flag = n >= 0 ? 1 : 2;
	if (!(str = malloc(sizeof(char) * (len + flag))))
		return (0);
	i = 0;
	while (i < len)
	{
		mod = n % 10;
		str[i++] = (mod < 0 ? '0' - mod : '0' + mod);
		n /= 10;
	}
	if (mod < 0)
	{
		str[i++] = '-';
		len++;
	}
	str[i] = '\0';
	str = ft_strrev(str, len);
	return (str);
}
