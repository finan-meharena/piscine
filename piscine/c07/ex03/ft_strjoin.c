/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:16:07 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/24 15:16:07 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	calculate_total_len(int size, char **strs, const char *sep)
{
	int		strs_len;
	int		total_len;
	int		i;

	strs_len = 0;
	total_len = 0;
	i = -1;
	while (++i < size)
		strs_len += ft_strlen(strs[i]);
	total_len = strs_len + (size - 1) * ft_strlen(sep);
	return (total_len);
}

char	*concatenate_strings(int size, char **strs, const char *sep, char *s)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			s[k++] = strs[i][j];
		if (i != size - 1)
		{
			j = -1;
			while (sep[++j] != '\0')
				s[k++] = sep[j];
		}
	}
	s[k] = '\0';
	return (s);
}

char	*ft_strjoin(int size, char **strs, const char *sep)
{
	char	*s;
	int		total_len;

	if (size <= 0)
	{
		s = (char *)malloc(sizeof(char));
		if (s == NULL)
			return (NULL);
		*s = '\0';
		return (s);
	}
	total_len = calculate_total_len(size, strs, sep);
	s = (char *)malloc(sizeof(char) * (total_len + 1));
	if (s == NULL)
		return (NULL);
	s[0] = '\0';
	return (concatenate_strings(size, strs, sep, s));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab[4];

// 	tab[0] = "Hello";
// 	tab[1] = "world";
// 	tab[2] = "how";
// 	tab[3] = "are you?";

// 	char *result = ft_strjoin(4, tab, " ");
// 	printf("%s\n", result);

// 	return (0);
// }
