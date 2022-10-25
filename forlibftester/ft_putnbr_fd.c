/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:29:21 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/17 19:52:23 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void    ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		write(1, "147483648", fd);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr_fd(n * -1, 1);
	}
	else if(n < 10)
	{
		ft_putchar_fd(n + '0', 1);
	}
	else
	{
	ft_putnbr_fd((n / 10), 1);
	ft_putchar_fd((n % 10) + '0', 1);		
	}
}*/
void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
/*int main(void)
{
	int nb;

	nb = '\0';
	ft_putnbr_fd(nb, 1);
	return (0);
}*/
