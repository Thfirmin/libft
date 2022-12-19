/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 05:13:14 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/08 08:11:58 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	size_t	old;
	void	*ptr;

	total = 0;
	while (count--)
	{
		old = total;
		total += size;
		if (old > total)
			return (0);
	}
	ptr = malloc(total);
	old = -1;
	while (ptr && (++old < total))
		*(char *)(ptr + old) = 0;
	return (ptr);
}
