/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:06:53 by abang             #+#    #+#             */
/*   Updated: 2020/12/22 19:25:56 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*find;

	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == c)
			find = tmp;
		tmp++;
	}
	if (c == '\0')
		return (tmp);
	return (find);
}
