/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:24:20 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/02 18:45:38 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include    <stdlib.h>
# include    <unistd.h>
// stdio buraya çek baştaki boşluğu koyma norminettede hata gözüksün test ettikten sonra silersin

int ft_strlen(const char *s);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_bzero(void *s, size_t n);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_memcpy(void *dest, const void *src, size_t n);
int ft_memset(void *s, int c, size_t n);
int ft_strlen(char *c);

#endif