/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abang <abang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 20:02:33 by abang             #+#    #+#             */
/*   Updated: 2021/04/30 22:14:20 by abang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_atof(char *s)
{
	float	num;
	float	flag;
	int		minus_flag;

	num = 0;
	flag = 0;
	minus_flag = 0;
	while(*s)
	{
		if (*s == '-')
		{
			minus_flag = 1;
			s++;
			continue ;
		}
		if (*s == '.')
		{
			flag = 0.1;
			s++;
			continue ;
		}
		if (flag != 0.0)
		{
			num = num + flag * (*s - '0');
			flag *= 0.1;
		}
		else
			num = num * 10 + (*s - '0');
		s++;
	}
	return (minus_flag == 1 ? -num : num);
}
