/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 09:57:38 by tribeiro          #+#    #+#             */
/*   Updated: 2021/02/19 15:45:25 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_size);
	if (size < dst_size)
		return (src_size + size);
	while (src[i] != '\0' && dst_size < (size - 1))
	{
		dst[dst_size] = src[i];
		i++;
		dst_size++;
	}
	dst[dst_size] = '\0';
	return (src_size + dst_size - i);
}
