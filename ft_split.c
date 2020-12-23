/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 12:42:26 by abang             #+#    #+#             */
/*   Updated: 2020/12/23 13:41:54 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_splitstr(char const *s, char c)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	while (s[len] != c)
		len++;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		ft_splitnum(char const *s, char c)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		if (s[i] == c || s[i] == '\0')
			cnt++;
		if (s[i + 1] == '\0')
			break ;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		cnt;
	int		i;

	cnt = ft_splitnum(s, c);
	if (!(str_arr = malloc(sizeof(char *) * (cnt + 1))))
		return (0);
	i = 0;
	while (i < cnt)
	{
		while (*s == c)
			s++;
		str_arr[i] = ft_splitstr(s, c);
		while (*s != c)
			s++;
		i++;
	}
	return (str_arr);
}
