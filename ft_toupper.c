/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:57:52 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/02 18:12:42 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}



// int	main(void)
// {
// 	char	str[] = "hello, world!";

// 	ft_str_toupper(str);

// 	printf("%s\n", str);  // Çıktı: HELLO, WORLD!
// 	return (0);
// }

