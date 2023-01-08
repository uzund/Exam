/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_isin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:31:20 by duzun             #+#    #+#             */
/*   Updated: 2023/01/08 23:41:12 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_isin(char c)
{
	int	i;
	char *charset = " \t\v\n\r\f\n";

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}
int	ft_count_words(char *s)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && ft_isin(s[i]))
			i++;
		if (s[i])
			word++;
		while (s[i] && !(ft_isin(s[i])))
			i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strndup(const char *s, size_t len)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst = ft_strncpy(dst, s, len);
	return (dst);
}

char	**ft_split(char *s)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	array = (char **)malloc(sizeof(char *) * (ft_count_words(s) + 1));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ft_isin(s[i]))
			i++;
		k = i;
		while (s[i] && !(ft_isin(s[i])))
			i++;
		if (i > k)
			array[j++] = ft_strndup(s + k, i - k);
	}
	array[i] = 0;
	return (array);
}

int	main(int ac, char **av)
{
	char	*s;
	char	**split;
	char	c;
	int		i;
	int		j;

	if (ac == 2)
	{
		c = ' ';
		s = av[1];
		printf("argumanin değeri (s) : %s\n", s);
		split = ft_split(s);
		i = 0;
		while (split[i])
		{
			printf("split[%d] : %s\n", i, split[i]);
			i++;
		}
		i = 0;
		j = 0;
		while (split[i])
		{
			j++;
			i++;
		}
		printf("dizi satır sayısı :%d\n", j);
		printf("argumanın kelime kelime tersten yazımı\n\
kelimeler arası tek boşluk olacak şekilde\n");
		while (j--)
		{
			printf ("%s", split[j]);
			if (j > 0)
				printf(" ");
		}
		printf("\n");
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
