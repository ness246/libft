/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amucahit <amucahit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:50:09 by amucahit          #+#    #+#             */
/*   Updated: 2025/06/16 14:40:56 by amucahit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int i;
  unsigned int j;
  
  i = 0;
  j = 0;
  while (src[j] != '\0')
  {
    j++;
  }
  while(src[i] != '\0')
  {
    if(i == size)
      break;
    dest[i] = src[i];
    i++;
  }
  while(dest[i] != '\0')
  {
    dest[i] = '\0';
    i++;
  }
  return (j);
}