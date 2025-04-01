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
# define NB_HORDE 5

int main(void) {
    Zombie *horde = zombieHorde(NB_HORDE, "Zombie");
    for (int i = 0; i < NB_HORDE; i++) {
        horde[i].announce();
    }
    delete [] horde;
    return 0;
}