/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:55:34 by tribeiro          #+#    #+#             */
/*   Updated: 2021/02/19 15:11:58 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	if (!src && !dest)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	while (n--)
		*dest_ptr++ = *src_ptr++;
	return (dest);
}
