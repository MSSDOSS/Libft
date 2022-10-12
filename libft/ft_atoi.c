/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:18:00 by hel-haia          #+#    #+#             */
/*   Updated: 2022/10/12 14:03:06 by hel-haia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	size_t res;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res > 9223372036854775807)   
		return (-1);
	if (res < 9223372036854775807)
		return (0);
	return (res * sign);
}

//#include <stdlib.h>
//#include <stdio.h>

int main(void)
{
    char *s;

    s = "9223372036854775807";
	// i = -9885 

    printf("%d\n",ft_atoi(s));
}

