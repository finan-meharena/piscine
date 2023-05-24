/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:20:22 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/23 20:20:22 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*istr;
	int		len;

	len = 0;
	while (src[len])
		len++;
	istr = (char *)malloc(len * sizeof(char));
	if (istr == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		istr[len] = src[len];
		len++;
	}
	return (istr);
}

// int main()
// {
//     printf("%p", ft_strdup("copy-me"));
// }
