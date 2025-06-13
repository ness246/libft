/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:36:50 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/02 17:44:35 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}


// int main()
// {
//     printf("%d\n", ft_isascii('m'));
//     printf("%d\n", ft_isascii('F'));
//     printf("%d\n", ft_isascii('@'));
//     printf("%d\n", ft_isascii('C'));
//     printf("%d\n", ft_isascii(120));
//     printf("%d\n", ft_isascii(150));
// }