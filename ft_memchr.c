/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:41:56 by user42            #+#    #+#             */
/*   Updated: 2020/07/09 15:31:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *src = (const char *)s;
	size_t i;

	i = 0;
	while (i < n)
	{
		if (src[i] == c)
			return ((void*)&src[i]);
		i++;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	char *ptr2;

	ptr2 = ft_memchr(argv[1], argv[2][0], atoi(argv[3]));
	printf("meme => %s\n", ptr2);
	ptr2 = memchr(argv[1], argv[2][0], atoi(argv[3]));
	printf("real => %s\n", ptr2);
}

