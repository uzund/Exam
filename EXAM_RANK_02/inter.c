/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:49:34 by duzun             #+#    #+#             */
/*   Updated: 2022/12/24 23:29:04 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_double(char *s, char c, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		if (s[n] == c)
			return (0);
		n++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*s1;
	char	*s2;

	if (ac == 3)
	{
		i = 0;
		s1 = av[1];
		s2 = av[2];
		if (*s2 == '\0')
			s2 = s1;
		while (s1[i] != '\0')
		{
			j = 0;
			while (s2[j] != '\0')
			{
				if (s1[i] == s2[j] && ft_double(s1, s2[j], i))
				{
					write(1, &s1[i], 1);
					break ;
				}
				j++;
			}
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
