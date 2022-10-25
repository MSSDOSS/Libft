/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <hel-haia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:18:00 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/21 00:10:49 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	overf(long long int pre, long long int cur)
{
	if (cur / 10 == pre)
		return (0);
	return (1);
}

static int	ispace(char *str, int *pi)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
				sign = -1;
			i++;
	}
	*pi = i;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;
	long long	test;

	res = 0;
	sign = ispace((char *)str, &i);
	while (((char *)str)[i] >= '0' && ((char *)str)[i] <= '9')
	{
		test = res;
		res = res * 10 + (((char *)str)[i] - '0');
		if (overf(test, res) == 1)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		i++;
	}
	return (res * sign);
}
/*
int main ()
{
	char s[] = "-4886";
	printf("%d\n", ft_atoi(s));
}*/
