/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:36:49 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:36:50 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int base_error(char *base)
{
    int i = 0, j;

    if (!base || !base[0] || !base[1])
        return (-1);
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= ' ')
            return (-1);
        j = i + 1;
        while (base[j])
        {
            if (base[j] == base[i])
                return (-1);
            j++;
        }
        i++;
    }
    return (0);
}

int get_index(char c, char *base)
{
    int i = 0;

    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0, sign = 1, base_len = 0, result = 0;


    if (!str || !*str || base_error(base) == -1)
        return (0);


    while (base[base_len])
        base_len++;


    while (str[i] <= ' ' && str[i] != '\0')
        i++;


    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }


    while (str[i])
    {
        int index = get_index(str[i], base);
        if (index == -1)
            break;
        result = result * base_len + index;
        i++;
    }

    return (sign * result);
}
char *conver_to_base(int nbr,char *base_to)
{
	char *c;
	int i=0;
	int bas=0;
	int neg=0;
	while (base_to[i])
	i++;
	if(nbr==0)
	{
		c=malloc(2);
		c[0]='0';
		c[1]='\0';
		return(c);
	}
	if(nbr<0)
	{
		nbr *= -1;
		bas++;
		neg=1;
	}
	int temp=nbr;
	while(temp>0)
	{
	temp =temp/i;
	bas++;
	}
	c=malloc(sizeof(char)*(bas+1));
	c[bas]='\0';
	while(nbr>0)
	{
		c[--bas]=base_to[nbr%i];
		nbr =nbr/i;

	}
	if(neg==1)
	c[0]='-';



	return(c);




}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int number=ft_atoi_base(nbr,base_from);
	char *result;
	if(base_error(base_to)== -1 || base_error(base_from) == -1)
	return NULL;

	result=conver_to_base(number,base_to);
	return(result);

}


int main()
{

 char *c;
 c=ft_convert_base("-2147483647", "0123456789", "01");
 printf("%s",c);
 free(c);
}
