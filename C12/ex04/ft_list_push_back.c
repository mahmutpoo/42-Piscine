/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:44:24 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/07 21:44:46 by mapolat          ###   ########.fr       */
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

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new=ft_create_elem(data);
	if(*begin_list==NULL)
	*begin_list=new;
	else
	{
		t_list *temp=*begin_list;
		while (temp->next != NULL)
		temp=temp->next;
		temp->next=new;

	}

}
