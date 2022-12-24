/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:51:45 by duzun             #+#    #+#             */
/*   Updated: 2022/12/24 22:12:29 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int		len;
	char	*s;

	if (ac == 2)
	{
		s = av[1];
		len = ft_strlen(s) -1;
		while (s[len] && s[len] == ' ')
			--len;
		while (s[len] && s[len] != ' ')
			--len;
		len++;
		while (s[len] != '\0' && s[len] != ' ')
		{
			write(1, &s[len], 1);
			len++;
		}
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
