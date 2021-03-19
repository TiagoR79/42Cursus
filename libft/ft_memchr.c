/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:47:47 by tribeiro          #+#    #+#             */
/*   Updated: 2021/02/18 15:21:23 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str_ptr;

	str_ptr = (unsigned char *)s;
	while (n--)
		if (*str_ptr++ == (unsigned char)c)
			return (str_ptr - 1);
	return (NULL);
}
