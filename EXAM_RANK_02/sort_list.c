/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:01:14 by duzun             #+#    #+#             */
/*   Updated: 2023/01/09 02:42:05 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "list.h"
// #include <stdlib.h>
// #include <stdio.h>

int	cmp(int a, int b)
{
	return (a <= b);
}

void	swap_values(t_list *a, t_list *b)
{
	int	swap;

	swap = a->data;
	a->data = b->data;
	b->data = swap;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swapped;
	t_list	*cur;

	swapped = 1;
	cur = lst;
	while (swapped == 1)
	{
		swapped = 0;
		while (cur != 0 && cur->next != 0)
		{
			if (cmp(cur->data, cur->next->data) == 0)
			{
				swap_values(cur, cur->next);
				swapped = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *list = NULL;
// 	t_list *current;

// 	current = malloc(sizeof(t_list));
// 	current->data = 5;
// 	current->next = list;
// 	list = current;

// 	current = malloc(sizeof(t_list));
// 	current->data = 2;
// 	current->next = list;
// 	list = current;

// 	current = malloc(sizeof(t_list));
// 	current->data = 8;
// 	current->next = list;
// 	list = current;

// 	current = malloc(sizeof(t_list));
// 	current->data = 3;
// 	current->next = list;
// 	list = current;

// 	current = malloc(sizeof(t_list));
// 	current->data = 1;
// 	current->next = list;
// 	list = current;

// 	current = malloc(sizeof(t_list));
// 	current->data = 7;
// 	current->next = list;
// 	list = current;

// 	current = malloc(sizeof(t_list));
// 	current->data = 4;
// 	current->next = list;
// 	list = current;

// 	current = malloc(sizeof(t_list));
// 	current->data = 6;
// 	current->next = list;
// 	list = current;

// 	list = sort_list(list, cmp);

// 	current = list;

// 	while (current != NULL)
// 	{
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	return (0);
// }