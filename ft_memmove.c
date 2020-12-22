/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:06:25 by abang             #+#    #+#             */
/*   Updated: 2020/12/22 19:20:43 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	unsigned int	i;

	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	while (i < len)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	dst = tmp;
	return (dst);
}
