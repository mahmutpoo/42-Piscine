/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 00:47:06 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/08 00:47:39 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ft_list_reverse(t_list **begin_list)
{
	t_list *current=*begin_list;
	t_list *prev=NULL;
	t_list *next=NULL;

	while (current != NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*begin_list=prev;

}
