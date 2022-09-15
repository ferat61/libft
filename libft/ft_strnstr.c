/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:18:53 by mferat            #+#    #+#             */
/*   Updated: 2022/09/02 19:18:56 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (needle[i] == 0)
		return ((char *)needle);
	while (haystack[i] != 0)
	{
		a = 0;
		while (haystack[i + a] == needle[a] && needle[i] != 0 && len > (a + i))
		{
			if (needle[a + 1] == 0)
				return (((char *)haystack) + i);
			a++;
		}
		i++;
	}
	return (0);
}
