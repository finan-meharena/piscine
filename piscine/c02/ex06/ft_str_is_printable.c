/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:45:50 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/17 19:45:50 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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

//     result = ft_str_is_printable("asdf");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("QWERTY");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("asd f1234~");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("999");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("\n");
//     printf("Result: %d\n", result);
//  return(0);
// }
