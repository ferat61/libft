/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferat <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:52:53 by mferat            #+#    #+#             */
/*   Updated: 2022/09/03 11:52:59 by mferat           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*frt;

	frt = malloc(count * size);
	if (frt == NULL)
		return (0);
	ft_bzero(frt, count * size);
	return (frt);
}
