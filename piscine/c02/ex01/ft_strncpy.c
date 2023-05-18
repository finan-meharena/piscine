/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:05:01 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/17 19:05:01 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main()
// {
//     char src[] = "Hel";
//     char dest[50]= "Worlds";
//     ft_strncpy(dest, src, 5);
// 	//strncpy(dest, src, 5);
//     printf("Source string: %s\n", src);
//     printf("Copied string: %s\n", dest);
//     return 0;
// }
