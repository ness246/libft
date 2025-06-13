/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:36:47 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/02 17:44:34 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isalpha(int c)
{

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

// int main()
// {
//     printf("%d\n", ft_isalpha('M'));
//     printf("%d\n", ft_isalpha('1'));
// }
