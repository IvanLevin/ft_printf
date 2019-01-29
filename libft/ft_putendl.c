/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <gkshleri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:18:28 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/29 10:09:32 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putendl(char const *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
		write(1, &s[i++], 1);
	write(1, "\n", 1);
}
