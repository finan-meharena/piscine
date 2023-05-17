/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 05:04:42 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/16 05:04:42 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

// int main()
// {
//     ft_putchar('H');
//     ft_putchar('e');
//     ft_putchar('l');
//     ft_putchar('l');
//     ft_putchar('o');
//     ft_putchar('\n');

//     char str[] = "Welcome to the test!";
//     ft_putstr(str);

//     return 0;
// }