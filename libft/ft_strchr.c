/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:00:40 by tribeiro          #+#    #+#             */
/*   Updated: 2021/02/19 15:36:30 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)s;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
		new_str++;
	}
	return (new_str);
}
