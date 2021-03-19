/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:56:33 by tribeiro          #+#    #+#             */
/*   Updated: 2021/02/22 12:13:20 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	f = ft_strlen(s1 + i);
	if (f)
		while (s1[f + i - 1] != 0 && ft_strchr(set, s1[f + i - 1]) != 0)
			f--;
	new = malloc(sizeof(char) * f + 1);
	if (new == NULL)
		return (NULL);
	ncpy(new, (s1 + i), f);
	new[f] = '\0';
	return (new);
}
