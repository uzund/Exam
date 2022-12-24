/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:57:30 by duzun             #+#    #+#             */
/*   Updated: 2022/12/24 21:18:34 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int		i;
	char	*s;
	char	c;
	char	r;

	if (ac == 4)
	{
		if (ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		i = 0;
		s = av[1];
		c = av[2][0];
		r = av[3][0];
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				s[i] = r;
				write(1, &s[i], 1);
			}
			else
				write(1, &s[i], 1);
			i++;
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
