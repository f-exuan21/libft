/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:06:30 by abang             #+#    #+#             */
/*   Updated: 2020/12/22 18:03:59 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strdup(const char *s1)
{
    char			*tmp;
    unsigned int	len;
    unsigned int	i;

    len = ft_strlen(s1);
    if(!(tmp = (char *)malloc(len * sizeof(char))))
		return (0);
	i = 0;
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
    return (tmp);
}
