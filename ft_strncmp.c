/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:47:26 by mferat            #+#    #+#             */
/*   Updated: 2022/09/02 14:47:30 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1 && s2 && *s1 == *s2 && (i < n - 1))
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
