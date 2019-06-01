/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_number_to_memory.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 12:15:50 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/06/01 12:20:31 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_write_number_to_memory(void *dst, void *src, int size, int endian)
{
	unsigned char *mem;

	mem = dst;
	ft_memcpy(mem, src, size);
	if (endian == BIG_ENDIAN)
		ft_memrev(mem, size);
	return (dst);
}
