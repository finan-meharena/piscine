/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:11:16 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/17 19:11:16 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[] = "HelloWorld";
// 	char str2[] = "Hello123";
// 	char str3[] = "";
// 	int result1 = ft_str_is_alpha(str1);
// 	int result2 = ft_str_is_alpha(str2);
// 	int result3 = ft_str_is_alpha(str3);
// 	printf("String: %s\nIs alphabetic: %d\n", str1, result1);
// 	printf("String: %s\nIs alphabetic: %d\n", str2, result2);
// 	printf("String: %s\nIs alphabetic: %d\n", str3, result3);
// 	return 0;
// }
