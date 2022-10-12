/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 05:24:35 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/12 14:05:22 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		write (fd, s, 1);
		i++;
	}
}

int	main(void)
{
	char c[] = "HamzaIsKing";
	ft_putstr_fd(c, 2);
	return (0);
}
