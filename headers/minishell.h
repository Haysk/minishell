/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:18:55 by adylewsk          #+#    #+#             */
/*   Updated: 2021/11/24 17:31:31 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <errno.h>
# include <limits.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include <readline/readline.h>
# include <readline/history.h>

extern char	**g_env;
 /*
 * error.c 
 */

void	ft_error(int error, char *str);
void	myerror(int error, char *str);

/*
* files.c
*/
char	*check_exe(char *file, char **envp);

#endif
