/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:27:02 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/05/01 11:50:29 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (s == 0)
		return ;
	i = 0;
	while (*s != 0)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}
