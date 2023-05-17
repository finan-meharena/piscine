/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:19:26 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/17 19:19:26 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main() {
//     char *test1 = "12345";
//     char *test2 = "42abc";
//     char *test3 = "";

//     printf("Test 1: %s\n", ft_str_is_numeric(test1) ? "Passed" : "Failed");
//     printf("Test 2: %s\n", ft_str_is_numeric(test2) ? "Passed" : "Failed");
//     printf("Test 3: %s\n", ft_str_is_numeric(test3) ? "Passed" : "Failed");

//     return 0;
// }
