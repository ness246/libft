/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:36:55 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/02 17:44:36 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}


// int main()
// {
//     printf("%d\n", ft_isprint('1'));
//     printf("%d\n", ft_isprint('%'));
//     printf("%d\n", ft_isprint(3));
//     printf("%d\n", ft_isprint(' '));
//     printf("%d\n", ft_isprint('T'));
//     printf("%d\n", ft_isprint('A'));
//     printf("%d\n", ft_isprint('t'));
// }