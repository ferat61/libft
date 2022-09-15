/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:54:46 by mferat            #+#    #+#             */
/*   Updated: 2022/09/03 16:54:48 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		a;
	size_t		b;
	char		*ab;

	a = 0;
	b = 0;
	ab = malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ab || !s1 || !s2)
		return (0);
	while (a < ft_strlen(s1))
	{
		ab[a] = s1[a];
		a++;
	}
	while (b < ft_strlen(s2))
	{
		ab[a] = s2[b];
		a++;
		b++;
	}
	ab[a] = '\0';
	return (ab);
}
