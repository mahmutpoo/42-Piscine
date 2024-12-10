/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:48:46 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/08 02:00:36 by mapolat          ###   ########.fr       */
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
t_list *ft_create_elem(void *data) {
    t_list *ax = (t_list *)malloc(sizeof(t_list));
    if (ax == NULL) return NULL;
    ax->next = NULL;
    ax->data = data;
    return ax;
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if(begin_list == NULL)
	return ;
	while(begin_list != NULL)
	{
		f(begin_list->data);
		begin_list=begin_list->next;
	}
}
