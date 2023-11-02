/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:39:58 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/25 06:08:47 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
}

/*
int main(void)
{
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", isprint(' '));
	printf("%d\n", ft_isprint('~'));
    printf("%d\n", isprint('~'));
	printf("%d\n", ft_isprint('}'));
    printf("%d\n", isprint('}'));
	printf("%d\n", ft_isprint('g'));
    printf("%d\n", isprint('g'));

	printf("%d\n", ft_isprint('\n'));
    printf("%d\n", isprint('\n'));
}
*/
