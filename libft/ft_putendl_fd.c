/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:35:02 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/20 19:51:43 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (s != '\0')
		ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int main(void)
{
	char s[] = "hamza";

	ft_putendl_fd(s, 1);
}*/
