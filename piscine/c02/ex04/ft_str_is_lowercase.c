/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:34:41 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/17 19:34:41 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
//     int result;

//     result = ft_str_is_lowercase("asdf");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("QWERTY");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("asdf1234");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("000999");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("");
//     printf("Result: %d\n", result);
//     return 0;
// }
