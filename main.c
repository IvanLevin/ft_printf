/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkshleri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:26:27 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/29 17:22:31 by gkshleri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char a[5] = "Hello";
	ft_printf("%#0--+232.643 TEST_WORD", 3);
	return (0);
}
