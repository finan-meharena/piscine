/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 05:17:52 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/16 05:17:52 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		counter;
	char	temp;

	counter = 0;
	while (counter < size - 1)
	{
		temp = tab[size];
		tab[size] = tab[counter];
		tab[counter] = temp;
		counter++;
		size--;
	}
}
