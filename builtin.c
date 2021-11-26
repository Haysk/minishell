/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:46:17 by adylewsk          #+#    #+#             */
/*   Updated: 2021/11/26 07:46:36 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/minishell.h"

void	ft_cd(char **env, char *param); //change le repertoire courant et modifie le pwd
void	ft_pwd(char **env, int fd); //affiche le pwd dans le fd donne
void	ft_export(); // VOIR PRECISEMENT LE FONCTIONNEMENT
void	ft_unset();
//void	ft_env(int fd); //affiche l'environnement dans le fd donne

void	ft_echo(char *option, char *param, int fd)
{
	ft_putstr_fd(param, fd);
	if (ft_strncmp(option, "-n", 3))
		ft_putchar_fd('\n', fd);
}

void	ft_env(t_env *env)//, int fd)
{
	int	i;

	i = 0;
	while (i < env->size)
	{
		// ft_putstr_fd(env->name[i], fd);
		// ft_putstr_fd("=", fd);
		// ft_putstr_fd(env->value[i], fd);
		// ft_putstr_fd("\n", fd);
		printf("%s=%s\n", env->name[i], env->value[i]);
		i++;
	}
}
