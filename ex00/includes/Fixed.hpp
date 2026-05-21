/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 08:54:38 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/21 08:28:20 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed 
{
	private:
		int value;
		static const int fractional_bits = 8;
	public:
		Fixed();  
		~Fixed(); 
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
#endif
