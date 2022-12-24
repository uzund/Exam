/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:24:05 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 00:38:34 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*rtn;

	rtn = (char *)malloc(sizeof(src) * (ft_strlen(src) + 1));
	if (!rtn)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		rtn[i] = src[i];
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
