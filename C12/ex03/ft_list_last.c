/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:16:48 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/07 21:17:08 by mapolat          ###   ########.fr       */
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
t_list *ft_list_last(t_list *begin_list)
{
	while (begin_list !=NULL)
	{
		if(begin_list->next ==NULL)
		return(begin_list);
		begin_list=begin_list->next;
	}
	return(NULL);

}


/*
int main()
{
	int a=5;
	t_list *ax=(t_list *)malloc(sizeof(t_list));
	ax->next=(t_list *)malloc(sizeof(t_list));
	ax->next->next=(t_list *)malloc(sizeof(t_list));
	ax->next->next->data=&a;
	ax->next->next->next=NULL;
	t_list *c= ft_list_last(ax);
	printf("%d",*(int *)c->data);


}*/
