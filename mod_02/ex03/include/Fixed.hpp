/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:46:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/24 13:47:58 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class Fixed{
	private:
		int _nbr;
		const static int _fractBits = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed&);
	Fixed& operator = (const Fixed&a);
	bool operator>(Fixed const &right);
	bool operator < (const Fixed&right);
	bool operator >= (const Fixed&right);
	bool operator <= (const Fixed&right);
	bool operator == (const Fixed&right);
	bool operator != (const Fixed&right);
	Fixed operator + (const Fixed&right);
	Fixed operator - (const Fixed&right);
	Fixed operator * (const Fixed&right);
	Fixed operator / (const Fixed&right);
	Fixed& operator ++ ();
	Fixed operator ++ (int);
	Fixed& operator -- ();
	Fixed operator -- (int);

	static Fixed min(const Fixed& a, const Fixed& b);
	static Fixed max(const Fixed& a, const Fixed& b);
	static Fixed min(Fixed& a,  Fixed& b);
	static Fixed max(Fixed& a,  Fixed& b);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &obj);