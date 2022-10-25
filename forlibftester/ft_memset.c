/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:12:42 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/16 12:06:29 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	a;

	a = (unsigned char)c;
	p = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		*p = a;
		p++;
		i++;
	}
	return (b);
}
