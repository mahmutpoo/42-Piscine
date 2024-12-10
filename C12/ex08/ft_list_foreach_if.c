/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 02:20:41 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/08 02:20:46 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	if(begin_list == NULL)
	return ;
	while(begin_list != NULL)
	{
		if(!cmp(data_ref,begin_list->data))
		f(begin_list->data);
		begin_list=begin_list->next;
	}

}
