/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 00:03:51 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/23 02:08:04 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t j;
	char *p;

	j = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen (s + start) < len)
		len = ft_strlen (s + start);

	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	ft_strlcpy (p, s + start, len + 1);
	return (p);
}
