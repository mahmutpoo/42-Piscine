/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_create_elem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:41:12 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/03 20:42:46 by mapolat          ###   ########.fr       */
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

int main()
{
	int a=5;
	t_list *b;
	b=ft_create_elem(&a);
	printf("%d",*(int *)b->data);

}
