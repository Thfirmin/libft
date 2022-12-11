/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:08:03 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 17:48:29 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_worldlen(char const *s, char set);

static int	ft_pointer(char const *s, char set);

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		worlds;
	int		i;
	int		start;

	if (!s)
		return (0);
	worlds = 1;
	i = 0;
	while (*(s + i))
		if (*(s + i) == c)
			worlds ++;
	split = malloc((worlds + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = -1
	while (++i < worlds)
	{
		start = ft_pointer(s, c);
		*(split + i) = ft_substr(s, start, ft_worldlen((s + start), c));
	}
	*(split + worlds) = (void *)0; 
	return (split);
}

static int	ft_pointer(char const *s, char set)
{
	static int	i = -1;

	while (*(s + ++i))
	{
		if (!i && (*(s + i) != c))
			return (i);
		if (*(s + i) == c)
		{
			while ((*(s + i) == c) && (*(s + i)))
				i ++;
			return (i);
		}
	}
	return (i);
}

static size_t	ft_worldlen(char const *s, char set)
{
	size_t	len;

	len = 0;
	while (s && (*(s + len) && (*(s + len) != set)))
		len ++;
	return (len);
}
