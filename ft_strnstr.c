/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:06:50 by abang             #+#    #+#             */
/*   Updated: 2020/12/22 19:33:47 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char			*tmp;
	char			*tmp2;
	unsigned int	i;
	unsigned int	l;

	tmp = (char *)str;
	tmp2 = (char *)to_find;
	i = 0;
	l = ft_strlen(tmp2);
	while (i + l <= len)
	{
		if (!ft_memcmp(tmp, tmp2, l))
			return (tmp);
		tmp++;
		i++;
	}
	return (0);
}
