/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:46:17 by adylewsk          #+#    #+#             */
/*   Updated: 2021/11/25 21:07:42 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/minishell.h"

void	ft_cd(char **env, char *param); //change le repertoire courant et modifie le pwd
void	ft_pwd(char **env, int fd); //affiche le pwd dans le fd donne
void	ft_export(); // VOIR PRECISEMENT LE FONCTIONNEMENT
void	ft_unset();
void	ft_env(int fd); //affiche l'environnement dans le fd donne

void	ft_echo(char *option, char *param, int fd)
{
	ft_putstr_fd(param, fd);
	if (ft_strncmp(option, "-n", 3))
		ft_putchar_fd('\n', fd);
}
