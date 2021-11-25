/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:18:55 by adylewsk          #+#    #+#             */
/*   Updated: 2021/11/25 21:13:56 by adylewsk         ###   ########.fr       */
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

typedef struct s_datas
{
	char	**env;
}				t_datas;

 /*
 * error.c 
 */

void	ft_error(int error, char *str);
void	myerror(int error, char *str);

/*
* files.c
*/
char	*check_exe(char *file, char **envp);

/*
* builtin.c
*/


#endif
