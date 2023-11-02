/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 05:42:54 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/26 06:28:20 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	if (c < 'a' || c > 'z')
		return (c);
	return (c - 32);
}

/*
int	main(void)
{
	printf("%c\n", ft_toupper('d'));
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('D'));
	printf("%c\n", ft_toupper('5'));

	printf("%c\n", toupper('d'));
	printf("%c\n", toupper('a'));
	printf("%c\n", toupper('z'));
	printf("%c\n", toupper('D'));
	printf("%c\n", toupper('5'));
}
*/
