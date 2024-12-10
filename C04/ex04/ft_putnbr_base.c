/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:24 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:25 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i=0;
    while(str[i])
    i++;
    return(i);
}

void print_binary(int num)
{
    char c;

    if (num >= 2)
    print_binary(num / 2);
    c = (num % 2) + '0';
    write(1, &c, 1);
}
void print_octal(int num)
{
    char str[]="01234567";
    if(num>8)
    print_octal(num/8);
    write(1,&str[num%8],1);
}



void print_hexdecimal(int nbr)
{
     char str[]="0123456789abcdef";
     if(nbr>16)
     print_hexdecimal(nbr/16);
     write(1,&str[nbr%16],1);
}
void print_decimal(int nbr)
{
    char str[]="0123456789";
    if(nbr>9)
    print_decimal(nbr/10);
    write(1,&str[nbr%10],1);
}
void	print_base(int nbr, char *base)
{
    char decimal[]="0123456789";
    char hexadecimal[]="0123456789abcdef";
    char binary[]="01";
    char octal[]="01234567";
    int i=0;
    int len=ft_strlen(base);
    if(len <2)
    return ;
    if(nbr <0)
    {
    write(1,"-",1);
    nbr *= -1;
    }
    if(len ==10)
    {
        while(decimal[i]==base[i]&& (decimal[i]))
        i++;
        if(decimal[i]== '\0')
            print_decimal(nbr);
    }
    else if(len ==16)
    {
        while(hexadecimal[i]==base[i]&& (hexadecimal[i]))
        i++;
        if(hexadecimal[i]== '\0')
            print_hexdecimal(nbr);
    }

    else if(len ==2)
    {
        while(binary[i]==base[i]&& (binary[i]))
        i++;
        if(binary[i]== '\0')
        print_binary(nbr);

    }
    else if(len ==8)
    {
        while(octal[i]==base[i]&& (octal[i]))
        i++;
        if(octal[i]== '\0')
        print_octal(nbr);

    }

}

