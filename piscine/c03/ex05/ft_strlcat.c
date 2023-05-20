/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:10:06 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/18 20:10:06 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	while (src[k] != '\0')
		k++;
	return (i + k);
}

// #include <stdio.h>

// int main()
// {
//     char dest[15] = "Hello";
//     const char *src = "World";

//     unsigned int result = ft_strlcat(dest, src, sizeof(dest));

//     printf("Concatenated string: %s\n", dest);
//     printf("Resulting length: %u\n", result);

//     return 0;
// }
