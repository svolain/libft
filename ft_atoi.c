/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 07:16:17 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/30 13:35:24 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	n;
	int				i;
	int				flag;

	n = 0;
	i = 0;
	flag = 1;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == ' ' || str[i] == '\f' || str[i] == '\t')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (n > 9223372036854775807)
		return (9223372036854775808 - n);
	return (flag * n);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("9223372036854775807"));
	printf("%d\n", atoi("9223372036854775807"));
}
*/
