/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:05:26 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/30 09:27:11 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

/*
int main(void)
{
	printf("%d\n",ft_isascii(0));
	printf("%d\n",isascii(0));
	printf("%d\n",ft_isascii('3'));
    printf("%d\n",isascii('3'));
	printf("%d\n",ft_isascii('r'));
    printf("%d\n",isascii('r'));
	printf("%d\n",ft_isascii('H'));
    printf("%d\n",isascii('H'));

	printf("%d\n",ft_isascii(-1));
    printf("%d\n",isascii(128));
}
*/
