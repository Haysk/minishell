/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:02:59 by adylewsk          #+#    #+#             */
/*   Updated: 2021/11/25 21:13:57 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/minishell.h"

int		found_var_env(); //recupere l'index de la variable env si elle existe
char	*get_var_env(char **env, int env_index); //recupere le contenue de la variable env si il existe
void	update_env(char **env, char *var, char *new_content); //met a jour la variable env avec le contenu passe en parametre
