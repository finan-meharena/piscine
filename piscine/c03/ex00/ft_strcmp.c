/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:31:22 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/18 19:31:22 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int main()
// {
//     const char *str1 = "Hello";
//     const char *str2 = "Hello";
//     const char *str3 = "World";

//     int result1 = ft_strcmp(str1, str2);
//     int result2 = ft_strcmp(str1, str3);
//     int result3 = ft_strcmp(str3, str1);

//     printf("Comparison result 1: %d\n", result1);
//     printf("Comparison result 2: %d\n", result2);
//     printf("Comparison result 3: %d\n", result3);

//     return 0;
// }
