/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/12/20 12:05:13 by gabdoush          #+#    #+#             */
/*   Updated: 2021/12/20 12:07:26 by gabdoush         ###   ########.fr       */
=======
/*   Created: 2021/11/01 10:53:24 by gabdoush          #+#    #+#             */
/*   Updated: 2021/11/02 09:51:12 by gabdoush         ###   ########.fr       */
>>>>>>> 990d958b7492d4540a5bc989b864d86905a55dbe
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file descriptor, followed by a newline.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
