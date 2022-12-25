/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:45:29 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 14:59:42 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_count(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*rtn;
	int		len;

	len = ft_count(nbr);
	rtn = (char *)malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (NULL);
	rtn[len] = '\0';
	if (nbr < 0)
		rtn[0] = '-';
	else if (nbr == 0)
		rtn[0] = '0';
	while (nbr != 0)
	{
		--len;
		rtn[len] = absolute_value(nbr % 10) + '0';
		nbr /= 10;
	}
	return (rtn);
}
