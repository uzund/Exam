/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:49:19 by duzun             #+#    #+#             */
/*   Updated: 2023/01/08 00:14:20 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_count_words(char *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

char	*ft_strndup(const char *s1, size_t len)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst = ft_strncpy(dst, s1, len);
	dst[len] = '\0';
	return (dst);
}

char	**ft_split(char *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	array = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
			array[j++] = ft_strndup(s + k, i - k);
	}
	array[j] = 0;
	return (array);
}

int	main(int ac, char **av)
{
	char	*s;
	char	**split;
	char	c;
	int		i;

	if (ac == 2)
	{
		c = ' ';
		s = av[1];
		printf("s in değeri : %s\n", s);
		split = ft_split(s, c);
		i = 0;
		while (split[i])
		{
			printf("split[%d] : %s\n", i, split[i]);
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
