/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adylewsk <adylewsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:26:48 by adylewsk          #+#    #+#             */
/*   Updated: 2021/11/24 11:29:53 by adylewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "headers/minishell.h"

char	**g_env = NULL;

int	main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	g_env = envp;
	printf("%s\n", *g_env);
	return (0);
}
