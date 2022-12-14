/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:07:15 by mferat            #+#    #+#             */
/*   Updated: 2022/09/03 15:07:19 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while (str[a] == '\t' || str[a] == '\v' || str[a] == ' '
		|| str[a] == '\f' || str[a] == '\r' || str[a] == '\n')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (c * 10) + (str[a] - '0');
		a++;
	}
	return (c * b);
}
