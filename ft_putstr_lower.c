/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 15:08:36 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/06/01 15:08:38 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_lower(char const *s)
{
	char c;

	while (*s)
	{
		c = ft_toupper(*s);
		write(1, &c, 1);
		s++;
	}
}
