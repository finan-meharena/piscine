/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:17:41 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/18 20:17:41 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    int dest_len;
    int src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;
    while (i < (size - dest_len - 1) && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    if (size > dest_len)
    {
        return (dest_len + src_len);
    }
    return (src_len + size);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     char *str = "1";
//     char dest[10] = "1";

//     printf("%lu\n", (unsigned long)strlcat(dest, str, 10));
//     printf("%s\n\n", dest);

//     char *str1 = "1";
//     char dest1[10] = "1";

//     printf("%u\n", ft_strlcat(dest1, str1, 10));
//     printf("%s\n", dest1);
// }
