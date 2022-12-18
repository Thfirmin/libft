/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:06:19 by thfirmin          #+#    #+#             */
/*   Updated: 2022/11/23 03:02:10 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

// Create a new node
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc (sizeof(t_list));
	if (!node)
		return (0);
	(*node).content = content;
	(*node).next = (void *)0;
	return (node);
}
