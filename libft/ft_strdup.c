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

#include	"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	a;

	a = 0;
	i = ft_strlen(s1) + 1;
	s2 = (char *)malloc(sizeof (char) * i);
	while (a < i)
	{
		((unsigned char *)s2)[a] = ((unsigned char *)s1)[a];
		a++;
	}
	return (s2);
}
