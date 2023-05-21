/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:36:32 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/18 19:36:32 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char src[] = "456";
//   char dest1[10] = "123";
//   printf("%s",ft_strncat(dest1,src,2));
//   printf("\n");
//   char dest2[10] = "123";
//   printf("%s",strncat(dest2,src,2));
//   return 0;
// }