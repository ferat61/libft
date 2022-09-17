/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:59:57 by mferat            #+#    #+#             */
/*   Updated: 2022/09/01 14:27:02 by mferat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	i = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (tmp_dst == tmp_src || !n)
		return (dst);
	if (dst < src)
	{
		while (n--)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
			tmp_dst[n] = tmp_src[n];
	}
	return (dst);
}
