/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:54:30 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/15 19:29:23 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	node = (t_list *)malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
