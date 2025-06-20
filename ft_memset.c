/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:37:00 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/20 16:33:31 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int main(void)
{
	char str1[20] = "Hello, 42!";
	char str2[20] = "Hello, 42!";
	ft_memset(str1, '*', 8);

	printf("ft_memset: %s\n", str1);
 	return (0);
 }
 */
