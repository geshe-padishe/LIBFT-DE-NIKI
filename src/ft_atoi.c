/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:38:53 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:40:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long int	gooba(void)
{
	unsigned long long int	nbr;
	int						i;

	i = 0;
	nbr = 1;
	while (i < 63)
	{
		nbr = nbr * 2;
		i++;
	}
	return (nbr);
}

int						gooba2(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int						ft_atoi(const char *nstr)
{
	unsigned long long int	nbr;
	int						sign;

	sign = 1;
	nbr = 0;
	while ((*nstr > 8 && *nstr < 14) || *nstr == 32 || *nstr == '+')
		nstr++;
	if (*nstr == '-')
	{
		sign = -1;
		nstr++;
	}
	if ((*nstr >= '0' && *nstr <= '9'))
		while (*nstr >= '0' && *nstr <= '9')
		{
			nbr = nbr * 10 + (*nstr - 48);
			if (nbr >= gooba())
				return (gooba2(sign));
			nstr++;
		}
	else
		return (0);
	return (nbr * sign);
}
/*
**int main(int argc, char **argv)
**{
**	char *str = argv[1];
**
**	argc = 0;
**	printf("meme => %d\n", ft_atoi(str));
**	printf("real => %d\n", atoi(str));
**	printf("--------\n");
**}
*/
