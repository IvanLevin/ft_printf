/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breolson <breolson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:26:27 by gkshleri          #+#    #+#             */
/*   Updated: 2019/01/30 07:48:08 by breolson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char a[5] = "Hello";
	printf("\n-----------------------\n");
	printf("ZDOROVYI printf    \n");
	printf("%010s", a);
	printf("\n-----------------------\n");
	printf("\n-----------------------\n");
	printf("printf KURIL'SCHIKA  \n");
		ft_printf("%010s", a);
	printf("\n-----------------------\n");
	printf("\n***********************\n");
	//printf("\n%d", ft_printf("%10s", a));
	printf("\n-----------------------\n");
	printf("ZDOROVYI printf    \n");
	printf("%15s", a);
	printf("\n-----------------------\n");
	printf("\n-----------------------\n");
	printf("printf KURIL'SCHIKA  \n");
		ft_printf("%15s", a);
	printf("\n-----------------------\n");
	//
	printf("\n***********************\n");
	printf("\n-----------------------\n");
	printf("ZDOROVYI printf    \n");
	printf("%-10s", a);
	printf("\n-----------------------\n");
	printf("\n-----------------------\n");
	printf("printf KURIL'SCHIKA  \n");
	ft_printf("%-1s", a);
	printf("\n-----------------------\n");
	return (0);
}
