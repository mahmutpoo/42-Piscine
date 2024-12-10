/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:21 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/10 19:26:49 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_print_comb(void)
{
	char	bir;
	char	iki;
	char	uc;

	bir = '0';
	while (bir <= '7')
	{
		iki = bir + 1;
		while (iki <= '8')
		{
			uc = iki + 1;
			while (uc <= '9')
			{
				write(1, &bir, 1);
				write(1, &iki, 1);
				write(1, &uc, 1);
				if (bir != '7' || iki != '8' || uc != '9')
					write(1, ", ", 2);
				uc++;
			}
			iki++;
		}
		bir++;
	}
}
