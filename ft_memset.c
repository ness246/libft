/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:37:00 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/02 17:44:39 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
// 	char str1[20] = "Hello, 42!";
// 	char str2[20] = "Hello, 42!";
// 	ft_memset(str1, '*', 8);

// 	printf("ft_memset: %s\n", str1);
// 	return (0);
// }
