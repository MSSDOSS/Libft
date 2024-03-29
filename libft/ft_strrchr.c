/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:01:36 by hel-haia          #+#    #+#             */
/*   Updated: 2022/11/05 20:35:05 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*save;

	save = NULL;
	ch = c;
	while (1 != 0)
	{
		if (*s == ch)
			save = ((char *)s);
		if (!*s)
			return (save);
		s++;
	}
	return (NULL);
}
