/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrihorc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 19:15:33 by chrihorc          #+#    #+#             */
/*   Updated: 2017/01/09 19:15:34 by chrihorc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int length;

	src_len = 0;
	dest_len = ft_strlen(dest);
	length = dest_len;
	if (size < length)
		return (ft_strlen(src) + size);
	if (size == length)
		return (ft_strlen(src) + length);
	else
	{
		while (src[src_len] && src_len < size - length - 1)
		{
			dest[dest_len] = src[src_len];
			dest_len++;
			src_len++;
		}
		dest[dest_len] = '\0';
	}
	return (length + ft_strlen(src));
}
