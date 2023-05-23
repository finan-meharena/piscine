/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:59:15 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/22 19:59:15 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)

{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

// #include <stdio.h>

// int main()

// {
//   printf("%d", ft_find_next_prime(90));
// }