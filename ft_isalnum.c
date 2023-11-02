/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:42:56 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/27 11:49:03 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if (c < '0' || c > '9')
		if (c < 'A' || c > 'Z')
			if (c < 'a' || c > 'z')
				return (0);
	return (1);
}

/*
int main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", ft_isalnum('D'));
	printf("%d\n", isalnum('D'));
	printf("%d\n", ft_isalnum('7'));
	printf("%d\n", isalnum('7'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", isalnum('\n'));
	printf("%d\n", ft_isalnum(','));
	printf("%d\n", isalnum(','));
}
*/
