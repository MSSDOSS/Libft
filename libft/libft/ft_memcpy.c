/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:55:37 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/20 14:57:26 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*{
	char		*dest;
	const char	*surc;

	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dest = (char *)dst;
	surc = (const char *)src;
	while (n--)
		dest[n] = surc[n];
	return (dest);
}



 *void	*ft_memcpy(void *dst, const void *src, size_t n)
 * {
	char		*dstc;
	const char	*srccc;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dstc = (char *)dst;
	srccc = (const char *)src;
	while (n--)
		dstc[n] = srccc[n];
	return (dst);
}

int main()
{
	char *dst = "\0";
	char *src = "\0";

	printf("%s\n", ft_memcpy(dst, src, 0));
	return (0);
}*/
