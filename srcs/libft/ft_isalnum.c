/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                      :+:     :+:            */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:13:53 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/08 20:15:22 by Thinotsuki   ###     ###.br              */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//alphanumeric character test, it's equal (isalpha || isdigit)

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
	{
	}
	else if (c >= 'a' && c <= 'z')
	{
	}
	else if (c >= 'A' && c <= 'Z')
	{
	}
	else
		return (0);
	return (1);
}
