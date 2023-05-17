/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 03:55:08 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/16 03:55:08 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main(void)
// {
//     int num1 = 10;
//     int num2 = 20;

//     printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
//     ft_swap(&num1, &num2);
//     printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

//     return 0;
// }