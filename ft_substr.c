/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:50:47 by mferat            #+#    #+#             */
/*   Updated: 2022/09/14 13:50:50 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		idx;
	char	*res;

	idx = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	res = malloc(sizeof(char) * (len));
	while (s[idx] && len--)
	{
		res[idx] = s[idx + start];
		idx++;
	}
	res[idx] = 0;
	return (res);
}
