/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:31:42 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/03 16:28:20 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int	ft_display(char *file)
{
	int fd;
	int r;
	char a;


	fd=open(file,O_RDONLY);
	if(fd == -1)
	return 0;

	while ((r=read(fd,&a,1)))
	{
		if(r==-1)
		return 0;
		write(1,&a,1);
	}
	close(fd);
	return 1;

}
int main(int argc, char **argv)
{
	if(argc<2)
	write(1,"File name missing.",18);
	if(argc>2)
	write(1,"Too many arguments.",19);
	else
	{
		if(!ft_display(argv[1]))
		write(2,"Cannot read file.",17);

	}
	return 0;
}

