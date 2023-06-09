/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 05:43:04 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/16 05:43:04 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main()
// {
//     char src[] = "Hello, world!";
//     char dest[50];

//     ft_strcpy(dest, src);

//     printf("Source string: %s\n", src);
//     printf("Copied string: %s\n", dest);

//     return 0;
// }