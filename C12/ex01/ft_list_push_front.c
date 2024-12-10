/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:24:50 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/07 21:17:49 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list *ax;
	ax=(t_list *)malloc(sizeof(t_list));
	if( ax ==NULL)
	return NULL;

	ax->next=NULL;
	ax->data=data;
	return (ax);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
t_list *new=NULL;
 new=ft_create_elem(data);
 if(new)
 {
	new->next= *begin_list;
	*begin_list=new;
 }

}
/*
int main()
{
	t_list *b=NULL;
	int a=5;
	int i=0;

	while (i<3)
	{
		int *a_copy=malloc(sizeof(int));
		*a_copy=a;
		ft_list_push_front(&b,a_copy);
		a +=5;
		i++;
	}
	t_list *temp=NULL;
	temp=b;

	while(temp)
	{
		printf("%d ",*(int *)temp->data);
		temp= temp->next;
	}

}
*/
