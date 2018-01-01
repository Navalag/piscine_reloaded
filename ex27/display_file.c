/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 09:59:54 by agalavan          #+#    #+#             */
/*   Updated: 2017/10/30 14:15:50 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_put_error(char *str)
{
	int i;

	i = -1;
	while (str && str[++i])
		;
	write(2, str, i);
}

int		main(int argc, char **argv)
{
	int		file_descriptor;
	int		buffer_reseiver;
	char	buffer[BUFFER_SIZE + 1];

	if (argc > 2)
		ft_put_error("Too many arguments.\n");
	if (argc == 1)
		ft_put_error("File name missing.\n");
	if (argc == 2)
	{
		file_descriptor = open(argv[1], O_RDONLY);
		if (file_descriptor == -1)
			ft_put_error("No file.\n");
		else
		{
			while ((buffer_reseiver = read(file_descriptor, buffer, \
			BUFFER_SIZE)))
			{
				buffer[buffer_reseiver] = '\0';
				ft_putstr(buffer);
			}
		}
	}
	return (0);
}
