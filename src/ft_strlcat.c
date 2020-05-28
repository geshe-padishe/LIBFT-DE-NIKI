/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:42:39 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:42:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "bsd/string.h"

size_t	ft_strlen2(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	lol(char *src, char *dst, size_t i, int r)
{
	if (src[i] == '\0' && r > 0)
		dst[i] = '\0';
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_length;
	size_t	d_length;
	int		r;

	i = 0;
	r = (int)size;
	d_length = ft_strlen2(dst);
	s_length = ft_strlen2((char*)src);
	while (*dst && r != 0)
	{
		dst++;
		r--;
	}
	if (r == 0)
		return (s_length + size);
	while (*src && (int)(i + 1) < r)
	{
		dst[i] = src[i];
		i++;
	}
	lol((char*)src, dst, i, r);
	return (d_length + s_length);
}
/*
**int main(int argc, char **argv)
**{
**	int size = 0;
**	int size2 = 0;
**	int i = atoi(argv[1]);
**	int j = atoi(argv[2]);
**	char str[20] = "i";
**	char str_b[30];
**	char str2[11] = "aazzuubbxx";
**	char str_b1[30];
**	char str1[20] = "i";
**	char strb2[30];
**	char str3[11] = "aazzuubbxx";
**	char *ptr = &str[i];
**	char *ptr2 = &str2[j];
**	char *ptr1 = &str1[i];
**	char *ptr3 = &str3[j];
**
**	size = strlcat(ptr, ptr2, atoi(argv[3]));
**	size2 = ft_strlcat(ptr1, ptr3, atoi(argv[3]));
**	printf("first char is %c\n", *ptr2);
**	printf("first char is %c\n", *ptr3);
**	printf("real => %s and size was %d\n", str, size);
**	printf("meme => %s and size was %d\n", str1, size2);
**}
*/
