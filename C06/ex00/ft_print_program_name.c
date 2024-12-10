/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:18 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:19 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int argc, char *argv[])
{
	argc = 1;
	while (*argv[0])
		write(1, (argv[0])++, 1);
	write(1, "\n", 1);
	return (0);
}

