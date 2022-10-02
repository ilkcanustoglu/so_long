/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42.istanbul.com.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:31:34 by iustoglu          #+#    #+#             */
/*   Updated: 2022/09/27 14:48:02 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

char	*get_next_line(int fd);
char	*ft_read(int fd, char *save);
char	*ft_save(char *save);
char	*ft_get_line(char *save);
char	*f_strchr(char *save, int c);
char	*f_strjoin(char *save, char *buff);
size_t	f_strlen(char *save);

#endif
