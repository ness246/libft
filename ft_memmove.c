/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:42:55 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/16 16:00:50 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void *memmove(void *dest, const void *src, size_t n)
{
  char *d = dest;
  const char *s = src;
  if(d < s) {
    while(n--)
      *d++ = *s++;
}
  else {
     char *sons = s + (n-1);
     char *sond = d + (n-1);
     
	 while(n--)
       *lastd-- = *lasts--;
}
  
  return dest;
}

