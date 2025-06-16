/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:37:03 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/16 14:40:56 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *c)
{
    int i;
    i = 0;
    while (c[i] != '\0')
            i += 1;
    return (i);
}

// int main()
// {
//     printf("%d\n", ft_strlen("Selamlar"));
// }