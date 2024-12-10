/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:30:01 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/10 19:30:02 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
#include <stdio.h>
#include <string.h>

void ft_putstr(char *str)
{
	int i=0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
	write(1,"\n",1);

}
void ft_print_number(int i)
{
	char str[]="0123456789";
	if(i>9)
	ft_print_number(i/10);
	write(1,&str[i%10],1);
	write(1,"\n",1);
}
void ft_show_tab(struct s_stock_str *par)
{
	int i=0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_print_number(par[i].size);
		ft_putstr(par[i].copy);
		i++;

	}
}

int main()
{
	 char *av[] = {"Hello", "World", "!"};
	 int ac=3;
	t_stock_str *a=ft_strs_to_tab(ac,av);
	ft_show_tab(a);
}


