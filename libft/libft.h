/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asobreir <asobreir@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:46:18 by asobreir          #+#    #+#             */
/*   Updated: 2021/02/09 22:03:56 by asobreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

# include <string.h>
#include <stdio.h>

void  *ft_memset(void *str, int c, size_t len);
void  ft_bzero(void *str, size_t n);
void  *ft_memcpy(void *dst, const void *src, size_t n);
void  *ft_memccpy(void *dst, void *src, int c, size_t n);
void  *ft_memmove(void *dst, const void *src, size_t len);
void  *ft_memchr(const void *s, int c, size_t len);
int   ft_memcmp(const void *s1, const void *s2, size_t n)

#endif
