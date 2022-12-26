/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frsplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:57:29 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/26 11:58:51 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_frsplit(char **split)
{
	int	i;

	if (!split)
		return ;
	i = -1;
	while (*(split + ++i))
		free(*(split + i));
	free (split);
}
