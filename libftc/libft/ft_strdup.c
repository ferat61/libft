/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:21:24 by mferat            #+#    #+#             */
/*   Updated: 2022/09/03 11:21:27 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*b;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (size < len)
		len = size;
	b = (char *)malloc(sizeof(char) * (len + 1));
	if (!b)
		return (0);
	i = 0;
	while (len)
	{
		b[i] = s[start + i];
		i++;
		len--;
	}
	b[i] = 0;
	return (b);
}
