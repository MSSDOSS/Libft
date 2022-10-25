/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:42:09 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/23 02:51:07 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	sum_of_arrays;
	char	*arr;

	if (dstsize == 0)
		return (0);
	arr = (char *)src;
	j = ft_strlen(dst);
	i = 0;
	if (dstsize >= j)
		sum_of_arrays = j + ft_strlen(src);
	if (dstsize <= j)
		return (dstsize + ft_strlen(arr));
	while (arr[i] && j < dstsize - 1)
	{
		dst[j] = arr[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (sum_of_arrays);
}
