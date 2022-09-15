/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:06:51 by mferat            #+#    #+#             */
/*   Updated: 2022/09/14 16:06:54 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;

	if (s1 == NULL || set == NULL)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	a = ft_strlen(s1);
	while (a-- && ft_strchr(set, s1[a]))
		;
	return (ft_substr((char *)s1, 0, a + 1));
}
