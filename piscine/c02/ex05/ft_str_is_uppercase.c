/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:11:38 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/17 21:11:38 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

//     result = ft_str_is_uppercase("asdf");
//     printf("Result: %d\n", result);

//     result = ft_str_is_uppercase("QWERTY");
//     printf("Result: %d\n", result);

//     result = ft_str_is_uppercase("asdf1234");
//     printf("Result: %d\n", result);

//     result = ft_str_is_uppercase("000999");
//     printf("Result: %d\n", result);

//     result = ft_str_is_uppercase("");
//     printf("Result: %d\n", result);
//     return 0;
// }
