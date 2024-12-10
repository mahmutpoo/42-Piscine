/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:48:46 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/07 21:49:15 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;
*/
t_list *ft_create_elem(void *data)
{
	t_list *ax=(t_list *)malloc(sizeof(t_list));
	if( ax ==NULL)
	return NULL;
	ax->next=NULL;
	ax->data=data;
	return ax;
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if(begin_list ==NULL)
	return NULL;
	if (nbr < 0)
    return NULL;
	t_list *temp=begin_list;
	while(temp->next != NULL && nbr>0)
	{
		temp=temp->next;
		nbr--;
	}
	if(nbr != 0)
	return NULL;

	return(temp);
}
