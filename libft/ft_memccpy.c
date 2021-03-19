/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:32:47 by tribeiro          #+#    #+#             */
/*   Updated: 2021/02/19 15:24:23 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	int			i;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	while (n--)
	{
		dest_ptr[i] = src_ptr[i];
		if ((unsigned char)src_ptr[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
