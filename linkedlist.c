/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <crondeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:09:29 by crondeau          #+#    #+#             */
/*   Updated: 2021/12/07 14:49:33 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lst_create(int number)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->value = number;
	element->next = NULL;
	return (element);
}

int	ft_lst_size(t_list *liste)
{
	int	i;

	i = 0 ;
	while (liste)
	{
		i++;
		liste = liste->next;
	}
	return (i);
}

void	ft_lst_pushback(t_list **liste, t_list *element)
{
	t_list	*last;

	if (!element)
		return ;
	if (!(*liste))
		*liste = element;
	else
	{
		last = (*liste);
		while (last->next)
			last = last->next;
		last->next = element;
	}
}

void	ft_free_linkedlist(t_list **liste)
{
	t_list	*tmp;

	while (*liste)
	{
		tmp = (*liste)->next;
		free(*liste);
		*liste = tmp;
	}
}
