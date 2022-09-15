/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:50:02 by mferat            #+#    #+#             */
/*   Updated: 2022/09/14 16:50:04 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libc.h"

static char	*ft_calculate(long a, size_t b, char *c)
{
	while (a > 0)
	{
		c[b--] = a % 10 + '0';
		a /= 10;
	}
	if (b == 0 && c[1] == '\0')
		c[b--] = '0';
	else if (b == 0 && c[1] != '\0')
		c[b--] = '-';
	return (c);
}

char	*ft_itoa(int n)
{
	long	a;
	char	*c;
	size_t	b;
	char	*d;

	a = n;
	if (a > 0)
		a = a * 1;
	else
		a = a * -1;
	if (n > 0)
		b = 0;
	else
		b = 1;
	while (n)
	{
		n /= 10;
		b++;
	}
	c = malloc(sizeof(char) * (b + 1));
	if (!c)
		return (0);
	c[b--] = '\0';
	d = ft_kontrol(a, b, c);
	return (d);
}
