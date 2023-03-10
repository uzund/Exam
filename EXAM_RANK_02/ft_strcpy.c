/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:41:14 by duzun             #+#    #+#             */
/*   Updated: 2022/12/24 20:06:19 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i] != '\0')
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}
