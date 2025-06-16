/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:36:58 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/16 14:40:53 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//(libft kütüphanesine koy her include u)

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    if  (!dest && !src)
        return  (NULL);
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
        i++;
    }
    return (dest);
}

