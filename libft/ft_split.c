/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:11:30 by mferat            #+#    #+#             */
/*   Updated: 2022/09/14 19:11:36 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static char	*ft_create_str(char const *str, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str, i + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		leng;
	char	**ptr;

	if (!s)
		return (NULL);
	leng = ft_count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (leng + 1));
	if (!(ptr))
		return (NULL);
	i = 0;
	while (i < leng)
	{
		while (*s == c)
			s++;
		ptr[i] = ft_create_str(s, c);
		s = &s[ft_strlen(ptr[i])];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
