/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:27:33 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/23 07:34:07 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->_rawbits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	std::cout << "Int Constructor called" << std::endl;
	this->_rawbits = n << fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawbits = (int)std::round(f * (1 << fractional_bits));
}
Fixed::Fixed(const Fixed &other) : _rawbits(other._rawbits) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) 
		this->_rawbits = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return this->_rawbits;
}

void Fixed::setRawBits( int const raw ) {
	this->_rawbits = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)this->_rawbits / (1 << fractional_bits);
}

int Fixed::toInt( void ) const
{
	return this->_rawbits >> fractional_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
return out;
}
