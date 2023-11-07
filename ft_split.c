/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:58:20 by vsavolai          #+#    #+#             */
/*   Updated: 2023/11/07 14:06:55 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_arrsize(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 1;
	if (s[i] == c)
	{
		while (s[i] == c)
			i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j++;
		}
		i++;
		while (s[i + 1] == c || s[i + 1] == '\0')
			i++;
	}
	return (j);
}

static void	ft_free(char **arr)
{
	size_t j;

	j = 0;
	while (arr[j] == 0)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
}

static int  ft_getlenght(const char *s, int i, char c)
{
	int j;
	
	j = 0;
	while(s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

static int	ft_fillarr(char **arr, const char *s, char c, size_t k)
{
	size_t  i;
 	int     j;
    
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if(s[i] != c)
		{     
			j = ft_getlenght(s, i, c);
			arr[k] = ft_substr(s, i, j);
			if (!arr[k])
			{
				ft_free(arr);
				return (k);
			}
			k++;
			i += j;
		}
		i ++;
	}
	return (k);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int 	k;

	if (!s)
		return (0);
	arr = (char **)malloc(sizeof(char *) * (ft_arrsize(s, c) + 1));
	if (arr == 0)
		return (0);
	k = 0;
	k = ft_fillarr(arr, s, c, k);
	arr[k] = 0;
	return (arr);
}
/*
#include <stdio.h>
int main(void)
{
    char *s = "lorem ipsum dolor";
    char **arr;
    arr = ft_split(s, ' ');

    size_t i = 0;
    while (arr[i] != '\0')
    {
        printf("%s\n", arr[i]);
        i++;
    }
	size_t j;

    j = 0;
    while (arr[j] == 0)
    {
        free(arr[j]);
        j++;
    }
    free(arr);
}
*/
