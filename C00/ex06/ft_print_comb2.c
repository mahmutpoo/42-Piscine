/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:21 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/10 19:26:52 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_writeint(int yaz)
{
	if (yaz > 9)
		ft_writeint(yaz / 10);
	ft_putchar((yaz % 10) + '0');
}

void	yaz(int ik, int br)
{
	if (ik < 10)
		ft_putchar('0');
	ft_writeint(ik);
	ft_putchar(' ');
	if (br < 10)
		ft_putchar('0');
	ft_writeint(br);
	if (!(ik == 98 && br == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	br;
	int	ik;

	ik = 0;
	while (ik < 99)
	{
		br = ik + 1;
		while (br < 100)
		{
			if (ik != br)
			{
				yaz(ik, br);
			}
			br++;
		}
		ik++;
	}
}
