/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:25:55 by clecat            #+#    #+#             */
/*   Updated: 2021/10/28 15:38:33 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*a;

	i = 0;
	a = malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (a == 0)
		return (NULL);
	ft_strlcpy(a, s, ft_strlen(s) + 1);
	while (a[i])
	{
		a[i] = (*f)(i, a[i]);
		i++;
	}
	return (a);
}
