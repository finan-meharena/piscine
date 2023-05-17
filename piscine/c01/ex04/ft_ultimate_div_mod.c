/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 04:50:57 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/16 04:50:57 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// int main()
// {
//     int num1 = 15;
//     int num2 = 4;

//     printf("Before division and modulo:\n");
//     printf("num1 = %d\n", num1);
//     printf("num2 = %d\n", num2);

//     ft_ultimate_div_mod(&num1, &num2);

//     printf("\nAfter division and modulo:\n");
//     printf("num1 = %d\n", num1);
//     printf("num2 = %d\n", num2);

//     return 0;
// }