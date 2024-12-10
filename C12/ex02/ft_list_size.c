/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:31:22 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/07 21:17:42 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_list_size(t_list *begin_list)
{
	int i=0;
	while (begin_list)
	{
	 begin_list=begin_list->next;
	 i++;
	}
	return(i);

}

/*
int main()
{

	t_list *ax=(t_list *)malloc(sizeof(t_list));
	ax->next=(t_list *)malloc(sizeof(t_list));
	ax->next->next=(t_list *)malloc(sizeof(t_list));
	ax->next->next->next=NULL;
	printf("%d",ft_list_size(ax));


}
*/
