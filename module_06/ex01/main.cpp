/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlugand- <vlugand-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:39:38 by vlugand-          #+#    #+#             */
/*   Updated: 2021/09/28 16:24:31 by vlugand-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw) 
{
	return reinterpret_cast<Data*>(raw);
}

int main(void) 
{
	Data 		*data = new Data;
	uintptr_t	ptr1;
	Data *		ptr2;

	data->setNb(42);
	std::cout << "Initial address:      " << data << "  || Value_Stored: " << data->getNb() << std::endl;
	ptr1 = serialize(data);
	std::cout << "Serialized address:   " << ptr1 << " || Value_Stored: " << reinterpret_cast<Data*>(ptr1)->getNb() << std::endl;
	ptr2 = deserialize(ptr1);
	std::cout << "Deserialized address: " << ptr2 << "  || Value_Stored: " << ptr2->getNb() << std::endl;
	delete data;
	return (0);
}
