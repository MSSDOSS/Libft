/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:19:01 by hel-haia          #+#    #+#             */
/*   Updated: 2022/11/01 18:08:15 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	wcount(char const *s, char c)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	while (*s)
	{
		if (*s != c && b == 0)
		{
			b = 1;
			i++;
		}
		else if (*s == c)
			b = 0;
		s++;
	}
	return (i);
}

static	char	**freeit(char **s, size_t i)
{
	while (i > 0 && s[i] != NULL)
	{
		free (s[i]);
		s[i] = NULL;
		i--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

static	void	varinit(size_t *i, size_t *j, long long *id)
{
	*i = -1;
	*j = 0;
	*id = -1;
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	long long	id;
	char		**doublstr;

	varinit(&i, &j, &id);
	if (!s)
		return (0);
	doublstr = malloc((wcount(s, c) + 1) * sizeof(char *));
	if (!doublstr)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && id < 0)
			id = i;
		else if ((s[i] == c || i == ft_strlen(s)) && id >= 0)
		{
			doublstr[j] = ft_substr(s + id, 0, i - id);
			if (!doublstr[j++] && i < wcount(s, c))
				return (freeit(doublstr, j));
			id = -1;
		}
	}
	doublstr[j] = 0;
	return (doublstr);
}
/*
int main()
{
	const char s[] = "HAMZA IS THE KING";
	char c = ' ';
	size_t i = 0;
	char **str = ft_split(s, c);
	while (str[i] != NULL)
	{
	printf("%s\n", str[i]);
	i++;
	}
	return (0);
}*/
