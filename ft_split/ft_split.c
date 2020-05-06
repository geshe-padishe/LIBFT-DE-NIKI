#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		is_not_c(char chr, char c)
{
	return (!(chr == c));
}

size_t	ft_strlen4(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && is_not_c(s[i], c))
		i++;
	return (i);
}

void	*ft_dd_strdup(const char *s, char **td_str, size_t cnt, char c)
{
	size_t j;
	size_t index;
	size_t i;

	index = -1;
	j = 0;
	i = 0;
	while (s[i] && j < cnt)
	{
		if (s[i] && is_not_c(s[i], c))
		{
			if ((td_str[j] = malloc(ft_strlen4(&s[i], c) + 1)) == NULL)
				return (NULL);
			while (s[i + ++index] && is_not_c(s[i + index], c))
				td_str[j][index] = s[i + index];
			td_str[j][i + index] = '\0';
			j++;
			i = i + index - 1;
			index = -1;
		}
		i++;
	}
	return (td_str);
}

char	**ft_split(char	const *s, char c)
{
	size_t	i;
	size_t	cnt;
	char	**td_str;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
			i--;
		}
		i++;
	}
	td_str = malloc(cnt + 1);
	if (ft_dd_strdup(s, td_str, cnt, c) == NULL)
		return (NULL);
	td_str[cnt] = NULL;
	free(s);
	return (td_str);
}


int main(int argc, char **argv)
{
	int i = 0;
	char **dd_str = ft_split(argv[1], argv[2][0]);

	while (dd_str[i] != NULL)
	{
		printf("%s\n", dd_str[i]);
		i++;
	}
}
