/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:38:53 by saandria          #+#    #+#             */
/*   Updated: 2024/07/01 11:43:00 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_swap(t_list *a, t_list *b)
{
	int	tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*cur;
	int	s;

	cur = lst;
	s = 1;
	while (s == 1)
	{
		s = 0;
		while(cur && cur->next)
		{
			if (cmp(cur->data, cur->next->data) == 0)
			{
				ft_swap(cur, cur->next);
				s = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return (lst);
}
