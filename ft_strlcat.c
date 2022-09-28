/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 08:32:44 by clecat            #+#    #+#             */
/*   Updated: 2021/10/29 17:29:55 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	taille;

	i = 0;
	y = 0;
	taille = 0;
	if (dstsize > ft_strlen(dst))
		taille = ft_strlen(src) + ft_strlen(dst);
	else
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[y] && i < (dstsize - 1))
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	dst[i] = '\0';
	return (taille);
}
