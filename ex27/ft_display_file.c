/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:27:43 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/16 16:40:20 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4194304

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int		error_check(int argc, int fd)
{
	if (argc == 1)
	{
		write(2, "File name missing.", 18);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
		return (1);
	}
	if (fd == -1)
	{
		write(2, "Open failed.", 12);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	fd = open(argv[1], O_RDONLY);
	if (error_check(argc, fd))
	{
		write(1, "\n", 1);
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	close(fd);
	return (0);
}
