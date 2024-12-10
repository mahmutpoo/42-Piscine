/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:13:15 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 17:46:28 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

void ft_putstr(char *str);
typedef int t_bool;
t_bool	ft_is_even(int nbr);
#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef EVEN
#define EVEN(nbr) (nbr%2==0)
#endif

#ifndef SUCCESS
#define SUCCESS 0
#endif

#ifndef EVEN_MSG
#define EVEN_MSG "I have an even number of arguments.\n"
#endif

#ifndef ODD_MSG
#define ODD_MSG "I have an odd number of arguments.\n"
#endif

#endif


