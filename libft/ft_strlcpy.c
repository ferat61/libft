/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <mferat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:05:18 by mferat            #+#    #+#             */
/*   Updated: 2022/09/01 16:05:20 by mferat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (src[a] != '\0' && a < (dstsize -1))
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	return (ft_strlen(dst));
}
