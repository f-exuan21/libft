/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:26:28 by abang             #+#    #+#             */
/*   Updated: 2020/12/22 18:04:19 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int		i;

	if(!(tmp = malloc((len + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (*(s + start + i) && i < len)
	{
		tmp[i] = *(s + start + i);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
