/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:50:22 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/12 14:04:21 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
		write (fd, &c, 1);
}

int	main(void)
{
	char c  = 'c';
	ft_putchar_fd(c, 1);
	return (0);
}
