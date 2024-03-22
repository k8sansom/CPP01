/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:13:49 by ksansom           #+#    #+#             */
/*   Updated: 2024/03/22 15:46:21 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

class HumanA
{
private:
	std::string	_weapon;
	std::string	_name;
public:
	HumanA(std::string name, std::string weapon);
	~HumanA();
	void attack(void) const;
};
#endif
