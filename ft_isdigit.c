/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:36:52 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/02 17:44:36 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isdigit(int i)
{
    if ((i >= 0 && i <= 9))
        return (1);
    return(0);
}

// int main()
// {
//     printf("%d\n", ft_isdigit(24));
//     printf("%d\n", ft_isdigit(2));
//     printf("%d\n", ft_isdigit(40));
// }