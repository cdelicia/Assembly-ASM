/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelicia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:24:43 by cdelicia          #+#    #+#             */
/*   Updated: 2019/10/04 23:22:03 by cdelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>

ssize_t		ft_strlen(const char *s);
char		*ft_strcpy(char *t, const char *f);
int			ft_strcmp(const char *s, const char *t);
ssize_t		ft_write(int fd, void *s, size_t n);
ssize_t		ft_read(int fd, void *s, size_t n);
char		*ft_strdup(const char *s);

#endif