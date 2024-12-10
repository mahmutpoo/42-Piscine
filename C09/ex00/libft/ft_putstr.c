/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:29:36 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/10 19:29:37 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i=0;
	while(str[i] != 0)
	{
		write(1,&str[i],1);
		i++;
	}
}

/*int main()
{
 char *c="slm";
 ft_putstr(c);
}*/
