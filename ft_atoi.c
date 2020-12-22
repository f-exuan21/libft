/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:05:21 by abang             #+#    #+#             */
/*   Updated: 2020/12/22 19:37:33 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		rst;
	int		minus;

	rst = 0;
	minus = 0;
	while (*str >= 9 && *str <= 13 || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		minus = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rst = rst * 10 + (*str - '0');
		str++;
	}
	return (minus ? -rst : rst);
}
