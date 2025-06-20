/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:36:44 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/20 16:02:00 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// int main()
// {
//     printf("%d\n", ft_isalnum('A'));
//     printf("%d\n", ft_isalnum('a'));
//     printf("%d\n", ft_isalnum('1'));
//     printf("%d\n", ft_isalnum('2'));
//     printf("%d\n", ft_isalnum('0'));
//     printf("%d\n", ft_isalnum('.'));
// }