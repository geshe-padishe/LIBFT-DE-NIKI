/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:40:59 by user42            #+#    #+#             */
/*   Updated: 2020/06/13 18:27:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

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
	else 
		ft_bzero(str, nbelm * size);
	return (ptr);
}
//
//int main()
//{
//	int size = 0;
//	int i = 0;
//	int j = 0;
//	char *ptr;
//	char *ptr2;
//
//	while (i < 100)
//	{
//		while (j < 100)
//		{
//			ptr = (char*)calloc(i, j);
//			ptr2 = (char*)ft_calloc(i, j);
//			assert(ptr && ptr2);
//			if (memcmp(ptr, ptr2, i * j))
//			{
//				printf("fail");
//				printf("\ni = %d, j = %d\n", i, j);
//			}
//			else
//			{
//				//printf("success");
//				//printf("\ni = %d, j = %d\n", i, j);
//			}
//			j++;
//			free(ptr);
//			free(ptr2);
//		}
//		j = 0;
//		i++;
//	}
//}
