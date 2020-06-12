/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:40:59 by user42            #+#    #+#             */
/*   Updated: 2020/06/12 21:15:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nbelm, size_t size)
{
	size_t	i;
	void	*ptr;
	char	*str;

	i = 0;
	if ((ptr = malloc(nbelm * size)) == NULL)
		return (NULL);
	str = ptr;
	if (nbelm == 0 || size == 0)
		str[0] = 0;
	if (size != 0 && nbelm != 0)	
		while (i < nbelm)
			str[i++] = 0;
	return (ptr);
}
/*
**int main(int argc, char **argv)
**{
**	int size = 0;
**	char *ptr;
**	char *ptr2;
**
**	argc = 2;
**	ptr = (char*)calloc(atoi(argv[1]), atoi(argv[2]));
**	ptr2 = (char*)ft_calloc(atoi(argv[1]), atoi(argv[2]));
**	//ptr[0] = 'W';
**	//ptr2[0] = 'W';
**
**	printf("real => %s\n", ptr);
**	printf("meme => %s\n", ptr2);
**	free(ptr);
**	free(ptr2);
**}
*/
