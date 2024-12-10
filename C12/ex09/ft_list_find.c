/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:08:09 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/08 23:08:24 by mapolat          ###   ########.fr       */
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
int cmpa(void *data, void *ref)
{

	return strcmp((char *)data,(char *)ref);

}
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while(begin_list != NULL)
	{
		if(!cmpa(begin_list->data,data_ref))
		return begin_list;
		begin_list=begin_list->next;
	}
	return NULL;
}
