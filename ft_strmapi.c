/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:11:04 by mferat            #+#    #+#             */
/*   Updated: 2022/09/19 14:52:17 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*nkt;
	unsigned int	a;

	nkt = ft_strdup(s);
	if (!s || !f || !nkt)
		return (0);
	a = 0;
	while (nkt[a])
	{
		nkt[a] = f(a, nkt[a]);
		a++;
	}
	return (nkt);
}
