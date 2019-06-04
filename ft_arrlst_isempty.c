/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlst_isempty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 21:52:39 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/06/03 21:53:05 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arrlst_isempty(t_arrlst *arrlst)
{
	if (!arrlst)
		return (-1);
	return (arrlst->size == 0);
}