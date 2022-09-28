/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clecat <clecat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:22:31 by clecat            #+#    #+#             */
/*   Updated: 2021/11/04 08:33:24 by clecat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_result(char const *s, unsigned int st, size_t len, char *r)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= st && len > 0)
		{
			r[j] = s[i];
			len--;
			j++;
		}
		i++;
	}
	r[j] = 0;
	return (r);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	int				j;
	char			*result;

	j = 0;
	i = 0;
	if (start > ft_strlen(s))
		result = malloc(sizeof(*s));
	else if (len > ft_strlen(s + start))
		result = malloc(sizeof(*s) * ft_strlen(s + start) + 1);
	else
		result = malloc(sizeof(*s) * len + 1);
	if (result == 0)
		return (NULL);
	ft_result(s, start, len, result);
	return (result);
}
