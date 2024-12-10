/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:29:42 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/10 19:29:43 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i=0;
	while(str[i])
	{
		i++;

	}
	return(i);
}

/*int main()
{
	int a;
	a=ft_strlen("merhaba");
	printf("%d",a);
}*/
