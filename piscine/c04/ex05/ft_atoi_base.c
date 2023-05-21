/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:48:29 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/18 20:48:29 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_ctoi(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return (-1);
}

int	ft_pow(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		result *= nb;
	return (result);
}

int	ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' && base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	negative;
	int	i;
	int	pow;
	int	base_type;

	negative = 1;
	i = 0;
	if ((base_type = ft_check_base(base)))
	{
		if (*str == '-')
		{
			i++;
			negative = -1;
		}
		while (str[i])
			i++;
		pow = 0;
		num = 0;
		while (--i >= 0)
		{
			if ((ft_ctoi(str[i]) != -1) && (ft_ctoi(str[i]) < base_type))
				num += ft_ctoi(str[i]) * ft_pow(base_type, pow++);
		}
		return (num * negative);
	}
	return (0);
}
