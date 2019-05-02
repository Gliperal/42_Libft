/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:30:15 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/05/01 22:07:03 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t dstlen;

	if ((dst == 0) || (src == 0))
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen + srclen < dstsize)
	{
		ft_memcpy(dst + dstlen, src, srclen);
		dst[dstlen + srclen] = 0;
	}
	else
	{
		ft_memcpy(dst + srclen, src, dstsize - dstlen - 1);
		if (dstsize > 0 && dstlen <= dstsize)
			dst[dstsize - 1] = 0;
	}
	return (dstlen + srclen);
}
