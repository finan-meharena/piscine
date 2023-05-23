/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:42:54 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/22 19:42:54 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if (power == 0 || (nb < 0 && power == 0))
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
		return (result);
	}
}

// int main(void)
// {
// 	int r = ft_iterative_power(-4, -1);
// 	printf("%d ", r);
// 	return (0);
// }
