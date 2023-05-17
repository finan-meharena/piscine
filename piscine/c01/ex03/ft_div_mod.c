/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 04:45:44 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/16 04:45:44 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
//     int num1 = 10;
//     int num2 = 3;
//     int result_div, result_mod;

//     ft_div_mod(num1, num2, &result_div, &result_mod);

//     printf("Dividend: %d, Divisor: %d\n", num1, num2);
//     printf("Result - Division: %d, Remainder: %d\n", result_div, result_mod);

//     return 0;
// }
