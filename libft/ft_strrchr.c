/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:31:51 by tribeiro          #+#    #+#             */
/*   Updated: 2021/02/16 11:32:11 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = 0;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == c)
		{
			last = ((char *)str);
		}
		str++;
	}
	return (last);
}
