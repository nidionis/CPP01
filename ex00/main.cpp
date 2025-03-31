/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidionis <nidionis@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:02:45 by nidionis          #+#    #+#             */
/*   Updated: 2025/03/31 17:03:08 by nidionis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void) {
    Zombie zombie1("Zombie1");
    Zombie zombie2("Zombie2");
    zombie1.announce();
    zombie2.announce();
    randomChump("Zombie3");
    return 0;
}