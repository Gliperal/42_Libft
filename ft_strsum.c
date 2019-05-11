/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:18:16 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/05/10 18:22:36 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsum(const char *s1, const char *s2)
{
	char	*sum;

	sum = ft_strnew((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (sum == NULL)
		return (NULL);
	ft_strcpy(sum, s1);
	ft_strcat(sum, s2);
	return (sum);
}
