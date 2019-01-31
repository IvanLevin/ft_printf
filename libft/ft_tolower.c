/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:23:37 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/31 15:02:23 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
